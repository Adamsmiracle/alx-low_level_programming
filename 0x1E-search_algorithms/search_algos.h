#ifndef SEARCH_ALGO
#define SEARCH_ALGO

#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t low, size_t high);
int jump_search(int *array, size_t size, int value);
size_t min(size_t a, size_t b);
int interpolation_search(int *array, size_t size, int value);
/**int exponential_search(int *array, size_t size, int value);
//int advanced_binary(int *array, size_t size, int value);
//listint_t *jump_list(listint_t *list, size_t size, int value);
//skiplist_t *linear_skip(skiplist_t *list, int value);
*/

#endif
