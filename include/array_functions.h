#ifndef ARRAY_FUNCTIONS_H
#define ARRAY_FUNCTIONS_H

#include <stddef.h>

void join_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest);
void join_and_sort_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest);
void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max);

#endif
