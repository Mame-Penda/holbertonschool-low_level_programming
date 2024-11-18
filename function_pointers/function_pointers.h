#ifndef PRINT_NAME_H
#define PRINT_NAME_H
#include <stddef.h>
#include <stdlib.h>
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif

