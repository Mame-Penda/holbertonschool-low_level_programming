#include "main.h"
/**
 * _memcpy -  copies memory area
 * @n: the number of byte to copy
 * @src: the source buffer to be copied
 * @dest: a pointer to the memory area pointed
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];
	return (dest);
}
