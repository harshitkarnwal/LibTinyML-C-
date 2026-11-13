#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "libtinyml.h"
static double ms(void){return 1000.0*(double)clock()/CLOCKS_PER_SEC;}
float tinyml_mean_abs_error(const float*a,const float*b,size_t n){float s=0;for(size_t i=0;i<n;i++)s+=fabsf(a[i]-b[i]);return n?s/(float)n:0;}
float tinyml_max_abs_error(const float*a,const float*b,size_t n){float m=0;for(size_t i=0;i<n;i++){float e=fabsf(a[i]-b[i]);if(e>m)m=e;}return m;}
int tinyml_benchmark_matrix(int n,int repeats,TinyMLBenchmarkResult*r){
 if(!r||n<=0||repeats<=0) return 0;
 size_t nn=(size_t)n*n;
 float *a=malloc(nn*sizeof(float)),*b=malloc(nn*sizeof(float)),*cf=malloc(nn*sizeof(float)),*dq=malloc(nn*sizeof(float));
 int8_t *a8=malloc(nn),*b8=malloc(nn); int32_t *ci=malloc(nn*sizeof(int32_t));
 if(!a||!b||!cf||!dq||!a8||!b8||!ci){free(a);free(b);free(cf);free(dq);free(a8);free(b8);free(ci);return 0;}
 unsigned x=123456789u; for(size_t i=0;i<nn;i++){x=1664525u*x+1013904223u;a[i]=((int)(x%2001)-1000)/1000.0f;x=1664525u*x+1013904223u;b[i]=((int)(x%2001)-1000)/1000.0f;}
 TinyMLQuantParams pa=tinyml_symmetric_params(a,nn),pb=tinyml_symmetric_params(b,nn);tinyml_quantize(a,a8,nn,pa);tinyml_quantize(b,b8,nn,pb);
 double sf=0,si=0,fmin=1e30,fmax=0,imin=1e30,imax=0;
 for(int z=0;z<repeats;z++){double t=ms();tinyml_matmul_f32(a,b,cf,n);double e=ms()-t;sf+=e;if(e<fmin)fmin=e;if(e>fmax)fmax=e;t=ms();tinyml_matmul_i8(a8,b8,ci,n);e=ms()-t;si+=e;if(e<imin)imin=e;if(e>imax)imax=e;}
 float os=pa.scale*pb.scale;for(size_t i=0;i<nn;i++)dq[i]=(float)ci[i]*os;
 *r=(TinyMLBenchmarkResult){n,repeats,sf/repeats,fmin,fmax,si/repeats,imin,imax,(si>0?sf/si:0),tinyml_mean_abs_error(cf,dq,nn),tinyml_max_abs_error(cf,dq,nn),2*nn*sizeof(float),2*nn*sizeof(int8_t)};
 free(a);free(b);free(cf);free(dq);free(a8);free(b8);free(ci);return 1;
}
int tinyml_append_benchmark_csv(const char*path,const TinyMLBenchmarkResult*r,int h){FILE*f=fopen(path,h?"w":"a");if(!f)return 0;if(h)fprintf(f,"size,repeats,float_avg_ms,float_min_ms,float_max_ms,int8_avg_ms,int8_min_ms,int8_max_ms,speedup,mae,max_error,float_input_bytes,int8_input_bytes,memory_reduction_x\n");fprintf(f,"%d,%d,%.6f,%.6f,%.6f,%.6f,%.6f,%.6f,%.4f,%.6f,%.6f,%zu,%zu,%.2f\n",r->size,r->repeats,r->float_ms_avg,r->float_ms_min,r->float_ms_max,r->int8_ms_avg,r->int8_ms_min,r->int8_ms_max,r->speedup,r->mae,r->max_error,r->float_bytes,r->int8_bytes,(double)r->float_bytes/r->int8_bytes);fclose(f);return 1;}
const char*tinyml_version(void){return "1.0.0";}
