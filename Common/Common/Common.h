#pragma once

#ifdef __cplusplus
extern "C" {
#endif

extern int get_bits(int value, int offset, int nr_of_bits);
extern void swap(int *a, int *b);

#ifdef __cplusplus
}
#endif