#include "main.h"
/**
 * _memset - _memset() function fills the first
 * @s: target
 * @b: constant bytes
 * @n: number of bytes
 * Return: returns new value of target
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
