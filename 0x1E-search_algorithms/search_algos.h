#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

size_t min(size_t num1, size_t num2);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
void print_array(int *array, size_t lowest, size_t highest);
int interpol_helper(int *array, size_t low, size_t high, int value);

#endif /* SEARCH_ALGOS_H */
