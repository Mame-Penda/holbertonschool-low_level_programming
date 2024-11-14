#include "main.h"
#include "stdlib.h"
/**
 * _calloc -  allocates memory for an array, using malloc.
 * @size: the size of bytes
 * @nmemb: memory of array
 *
 * Return: 0
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	char *ptr;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);
	ptr = mem;
	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = '\0';
	return (mem);
}
