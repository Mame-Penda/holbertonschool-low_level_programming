#include "main.h"
/**
 *_strchr - locates a character in a string
 *@s: the string to be searched
 *@c: the character to be located
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
		s++;
	{
		if (*s == c)
			return (s);
		else
			return ('\0');
	}
}
