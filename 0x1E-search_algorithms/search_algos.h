#ifndef _SEARCH_ALGOS
#define _SEARCH_ALGOS


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int help_binary(int *array, int value, size_t lo, size_t hi);
void array_print(int *array, size_t lo, size_t hi);



#endif
