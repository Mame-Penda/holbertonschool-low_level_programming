#include "main.h"
#include "stdlib.h"
#include "stdio.h"
/**
 * str_concat - concatenates two strings.
 * @s1: the string to be concatenated upon
 * @s2: the string to be concatenad to s1
 * Return: if concatened is fail null but pointer to new string
 * in case of sucess
 *
 */
char *str_concat(char *s1, char *s2)
{
	int index, concat_index = 0, len = 0;
	char *concat_str;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (index = 0; s1[index] || s2[index]; index++)
		len++;
	concat_str = malloc(sizeof(char) * len);
	if (concat_str == 0)
		for (index = 0; s1[index]; index++)
			concat_str[concat_index++] = s1[index];
	for (index = 0; s2[index]; index++)
		concat_str[concat_index++] = s1[index];
	return (concat_str);
}
