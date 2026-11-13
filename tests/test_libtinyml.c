#include <stdint.h>
#include <stdio.h>
#include <math.h>
#include "libtinyml.h"
#define CHECK(name,cond) do{int ok=(cond);printf("%-38s %s\n",name,ok?"PASS":"FAIL");if(!ok)fail++;}while(0)
int main(void){int fail=0;
 float v[]={-1,0,1};int8_t q[3];float d[3];TinyMLQuantParams p=tinyml_symmetric_params(v,3);tinyml_quantize(v,q,3,p);tinyml_dequantize(q,d,3,p);
 CHECK("1. quantization endpoints",q[0]==-127&&q[2]==127);
 CHECK("2. round-trip error",tinyml_max_abs_error(v,d,3)<=p.scale/2+1e-6f);
 CHECK("3. saturation",tinyml_quantize_value(10,p)==127&&tinyml_quantize_value(-10,p)==-127);
 float rf[]={-2,0,3};tinyml_relu_f32(rf,3);CHECK("4. float ReLU",rf[0]==0&&rf[1]==0&&rf[2]==3);
 int8_t ri[]={-5,0,8};tinyml_relu_i8(ri,3);CHECK("5. INT8 ReLU",ri[0]==0&&ri[1]==0&&ri[2]==8);
 float a[]={1,2,3,4},b[]={5,6,7,8},c[4];tinyml_matmul_f32(a,b,c,2);CHECK("6. FP32 matrix multiplication",fabsf(c[0]-19)<1e-6&&fabsf(c[3]-50)<1e-6);
 int8_t ai[]={1,2,3,4},bi[]={5,6,7,8};int32_t ci[4];tinyml_matmul_i8(ai,bi,ci,2);CHECK("7. INT8 matrix multiplication",ci[0]==19&&ci[3]==50);
 float w[]={1,2,3,4},x[]={2,1},bias[]={1,-1},y[2];tinyml_dense_f32(w,x,bias,y,2,2);CHECK("8. dense layer",fabsf(y[0]-5)<1e-6&&fabsf(y[1]-9)<1e-6);
 TinyMLBenchmarkResult r;CHECK("9. benchmark API",tinyml_benchmark_matrix(8,2,&r)&&r.float_bytes==512&&r.int8_bytes==128);
 CHECK("10. expected memory ratio",r.float_bytes/r.int8_bytes==4);
 printf("\n%d/10 tests passed.\n",10-fail);return fail?1:0;}
