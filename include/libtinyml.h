#ifndef LIBTINYML_H
#define LIBTINYML_H
#include <stddef.h>
#include <stdint.h>

typedef struct { float scale; int zero_point; } TinyMLQuantParams;
typedef struct {
    int size; int repeats;
    double float_ms_avg, float_ms_min, float_ms_max;
    double int8_ms_avg, int8_ms_min, int8_ms_max;
    double speedup;
    float mae, max_error;
    size_t float_bytes, int8_bytes;
} TinyMLBenchmarkResult;

TinyMLQuantParams tinyml_symmetric_params(const float *data, size_t n);
int8_t tinyml_quantize_value(float x, TinyMLQuantParams p);
float tinyml_dequantize_value(int8_t q, TinyMLQuantParams p);
void tinyml_quantize(const float *src, int8_t *dst, size_t n, TinyMLQuantParams p);
void tinyml_dequantize(const int8_t *src, float *dst, size_t n, TinyMLQuantParams p);
void tinyml_relu_f32(float *data, size_t n);
void tinyml_relu_i8(int8_t *data, size_t n);
void tinyml_matmul_f32(const float *a, const float *b, float *c, int n);
void tinyml_matmul_i8(const int8_t *a, const int8_t *b, int32_t *c, int n);
void tinyml_dense_f32(const float *w, const float *x, const float *bias, float *y, int out, int in);
float tinyml_mean_abs_error(const float *a, const float *b, size_t n);
float tinyml_max_abs_error(const float *a, const float *b, size_t n);
int tinyml_benchmark_matrix(int n, int repeats, TinyMLBenchmarkResult *out);
int tinyml_append_benchmark_csv(const char *path, const TinyMLBenchmarkResult *r, int write_header);
const char *tinyml_version(void);
#endif
