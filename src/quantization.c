#include <stdint.h>
#include <math.h>
#include "libtinyml.h"
TinyMLQuantParams tinyml_symmetric_params(const float *data, size_t n) {
    float m=0.0f; for(size_t i=0;i<n;i++){ float v=fabsf(data[i]); if(v>m)m=v; }
    TinyMLQuantParams p={m>0.0f?m/127.0f:1.0f,0}; return p;
}
int8_t tinyml_quantize_value(float x, TinyMLQuantParams p){
    long q=lroundf(x/p.scale); if(q>127)q=127; if(q<-127)q=-127; return (int8_t)q;
}
float tinyml_dequantize_value(int8_t q, TinyMLQuantParams p){ return ((float)q)*p.scale; }
void tinyml_quantize(const float *s,int8_t *d,size_t n,TinyMLQuantParams p){for(size_t i=0;i<n;i++)d[i]=tinyml_quantize_value(s[i],p);}
void tinyml_dequantize(const int8_t *s,float *d,size_t n,TinyMLQuantParams p){for(size_t i=0;i<n;i++)d[i]=tinyml_dequantize_value(s[i],p);}
