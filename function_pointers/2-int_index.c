#include "function_pointers.h"
/**
 * int_index - searches for an integer in an arrayof integers
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: a pointer to the funcyion to be used to compare value
 *
 * Return: if no element matches or size <= 0 - -1
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)


	{
		if (array != 0 && cmp != 0)
		{
			while (size > 0)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
