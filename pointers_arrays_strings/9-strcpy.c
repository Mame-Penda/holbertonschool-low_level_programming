#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * _strcpy:writes additional null bytes to dest
 * @dest: The buffer pointed
 *@src: The number to be printed
 */
char *_strcpy(char *dest, char *src);
{
	size_t i;

	for (i = 0; i < n && src[i] != '0\'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return dest;

}
