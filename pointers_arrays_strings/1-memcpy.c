#include "main.h"
/**
 * _memcpy -  copies memory area
 * @n: the number of byte to copy
 * @src: the source buffer to be copied
 * @dest: a pointer to the memory area pointed
 * Return: pointer to destination 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
