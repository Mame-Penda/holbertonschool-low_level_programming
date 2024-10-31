#include "main.h"
#include "stdio.h"
/**
 * puts_half - prints half of a string, followed by a new line
 *@n: The number to be printed
  */
void puts_half(char *str)
{
	int i = 0, j = 0, lenght = 0;

        while (*str++)
	{
                lenght++;
	}
	if (lenght % 2 == 0)

	{
		for (i = lenght / 2; i <= lenght; i++)
		{
			_putchar (str[i]);
		}
	}
	else if (lenght % 2 == 1)
	{
		for (j = (lenght - 1) / 2; j <= lenght; j++)
		{
			_putchar (str[j]);
		}
	}
	_putchar('\n');
}

