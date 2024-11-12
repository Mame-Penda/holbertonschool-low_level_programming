#include "main.h"
#include "stdlib.h"

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
	char *concat_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 != 0)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}

	if (s2 != 0)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}

	concat_str = malloc((len1 + len2 + 1) * sizeof(char));

	if (concat_str == 0)
	{
		return (0);
	}
		for (i = 0; i < len1; i++)
		{
			concat_str[i] = s1[i];
		}
	for (j = 0; j < len2; j++)
	{
		concat_str[i + j] = s2[j];
	}
	return (concat_str);
}
