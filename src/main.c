#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libtinyml.h"
static void demo(void){
 float v[]={-1.2f,-0.25f,0.0f,0.75f,1.5f};int8_t q[5];float d[5];TinyMLQuantParams p=tinyml_symmetric_params(v,5);tinyml_quantize(v,q,5,p);tinyml_dequantize(q,d,5,p);
 printf("LibTinyML-C %s - Quantization demo\nScale: %.6f\n",tinyml_version(),p.scale);printf(" value    int8    restored\n");for(int i=0;i<5;i++)printf("%7.3f %7d %11.3f\n",v[i],q[i],d[i]);
 float w[]={0.8f,0.2f,-0.1f,0.1f,0.7f,0.2f},x[]={1.0f,0.5f,-0.5f},b[]={0.1f,0.0f},y[2];tinyml_dense_f32(w,x,b,y,2,3);tinyml_relu_f32(y,2);printf("\nTiny dense layer + ReLU output: [%.3f, %.3f]\n",y[0],y[1]);
}
static int bench(const char*csv){int sizes[]={16,32,64,96};int repeats[]={20,10,5,3};printf("size | float ms | int8 ms | speedup | MAE | memory\n");for(int i=0;i<4;i++){TinyMLBenchmarkResult r;if(!tinyml_benchmark_matrix(sizes[i],repeats[i],&r))return 1;tinyml_append_benchmark_csv(csv,&r,i==0);printf("%4d | %8.3f | %7.3f | %7.2fx | %.5f | %.1fx smaller\n",r.size,r.float_ms_avg,r.int8_ms_avg,r.speedup,r.mae,(double)r.float_bytes/r.int8_bytes);}printf("CSV written to %s\n",csv);return 0;}
int main(int argc,char**argv){if(argc<2||strcmp(argv[1],"demo")==0){demo();return 0;}if(strcmp(argv[1],"bench")==0)return bench(argc>2?argv[2]:"results/results.csv");printf("Usage: %s [demo|bench [csv_path]]\n",argv[0]);return 1;}
