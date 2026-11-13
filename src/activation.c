#include <stdint.h>
#include "libtinyml.h"
void tinyml_relu_f32(float *d,size_t n){for(size_t i=0;i<n;i++)if(d[i]<0)d[i]=0;}
void tinyml_relu_i8(int8_t *d,size_t n){for(size_t i=0;i<n;i++)if(d[i]<0)d[i]=0;}
