#include "main.h"
#include "stdlib.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to be allocated
 *
 * Return: a pointer to be allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
		if (ptr == 0)
			return (98);

	return (ptr);
}
