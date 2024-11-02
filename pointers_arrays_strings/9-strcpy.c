#include "main.h"
#include "string.h"
/**
 * _strcpy - copies the string pointed to by src
 * _strcpy - copy paste string
 * @dest: The buffer pointed
 *@src: The number to be printed
 */
char *_strcpy(char *dest, char *src);
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
			inc++; }
	*(dest + inc) = '0';
	return (dest);

}
