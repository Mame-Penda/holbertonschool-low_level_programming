#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string to be copied
 *
 * Return: 0 in case of error, pointer to allocated space
 */

char *_strdup(char *str)
{
	int index, len = 0;
	char *duplicate;
if (str == 0)
return (0);
while (str[len] != '\0')
len++;
duplicate = malloc(sizeof(char) * (len + 1));
if (duplicate == 0)
return (0);
for (index = 0; index <= len; index++)
duplicate[index] = str[index];
return (duplicate);
}
