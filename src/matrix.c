#include <stdint.h>
#include "libtinyml.h"
void tinyml_matmul_f32(const float*a,const float*b,float*c,int n){
 for(int i=0;i<n;i++)for(int j=0;j<n;j++){float s=0;for(int k=0;k<n;k++)s+=a[i*n+k]*b[k*n+j];c[i*n+j]=s;}}
void tinyml_matmul_i8(const int8_t*a,const int8_t*b,int32_t*c,int n){
 for(int i=0;i<n;i++)for(int j=0;j<n;j++){int32_t s=0;for(int k=0;k<n;k++)s+=(int32_t)a[i*n+k]*(int32_t)b[k*n+j];c[i*n+j]=s;}}
void tinyml_dense_f32(const float*w,const float*x,const float*bias,float*y,int out,int in){
 for(int i=0;i<out;i++){float s=bias?bias[i]:0.0f;for(int j=0;j<in;j++)s+=w[i*in+j]*x[j];y[i]=s;}}
