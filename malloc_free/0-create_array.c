#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/*
 *create_array - allows to creates an array of char
 * @size: the size of the memory
 *@c: a char to initialize the array with
 @i: integer
 *Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (0);
array = malloc(size * sizeof(char));
if (array == 0)
return (0);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}


