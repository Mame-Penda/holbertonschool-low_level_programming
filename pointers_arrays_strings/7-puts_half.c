#include "main.h"
#include "stdio.h"
/**
 * puts_half - prints half of a string, followed by a new line
 *@n: The number to be printed
  */
void puts_half(char *str)
{
	int j = 0, lenght = 0, i = 0;

        while (str[i] != '\n')
	{
                lenght++;
	}
		for (j =(1 + (lenght - 1) / 2); j < lenght; j++)
		{
			_putchar (str[j]);
		}
	_putchar('\n');
}

