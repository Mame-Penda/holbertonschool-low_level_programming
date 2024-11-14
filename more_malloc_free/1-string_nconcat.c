#include "main.h"
#include "stdlib.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: the fisrt string
 * @s2: the second string
 * @n: is greater or equal to the length of s2 then use the entire string s2
 *
 * Return: NULL if function is fail
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len = n, i;
if (s1 == 0)
s1 = ("");
if (s2 == 0)
s2 = ("");
for (i = 0; s1[i]; i++)
len++;
concat = malloc(sizeof(char) * (len + 1));
if (concat == 0)
return (0);
len = 0;
for (i = 0; s1[i]; i++)
concat[len++] = s1[i];
for (i = 0; s2[i] && i < n; i++)
concat[len++] = s2[i];
concat[len] = '\0';
return (concat);
}

