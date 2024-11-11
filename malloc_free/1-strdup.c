#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/*
 * _strdup - a pointer to a newly allocated space in memory
 * @str: the string to be copied
 *
 * Return: Always 0
 */
char *_strdup(char *str)
{
char *str;
int i, lenght = 0;
if (str == 0)
return (0);
int lenght = 0;
while (str[lenght] != '\0')
lenght++;
duplicate = malloc(sizeof(char) * (lenght + 1));
if (duplicate == 0)
return (0);
for (int i = 0; <= lenght)
i++;
duplicate[i] = str[i];
return (duplicate);
}
