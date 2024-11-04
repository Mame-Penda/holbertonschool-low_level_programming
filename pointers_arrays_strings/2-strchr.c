#include "main.h"
/**
 *_strchr - Locates a character in a string
 *@s: The string to be searched
 *@c: The character to be located
 *Return: pointer to locates
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
