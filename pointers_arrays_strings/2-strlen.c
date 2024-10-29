#include "main.h"
#include "stddef.h"
/**
 * _strlen - return the length of a string
 * @s: The string to get the lenght
 *
 * Return: the lenght of @s
 */
int _strlen(char *s)
{
	size_t lenght = 0;

	while (*s++)
		lenght++;
	return (lenght);
}
