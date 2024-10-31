#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 *@str: The number to be printed
 * void
  */
void puts_half(char *str)
{
int j = 0, lenght = 0;

while (str[lenght] != '\0')
{
lenght++;
}
for (j = (1 + (lenght - 1) / 2); j < lenght; j++)
{
_putchar (str[j]);
}
_putchar('\n');
}

