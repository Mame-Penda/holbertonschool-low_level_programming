#ifndef function_pointers_h
#define function_pointers_h
#include <stdlib.h>

int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif

