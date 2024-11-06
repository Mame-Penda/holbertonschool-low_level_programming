#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: the string to be printed
 */
void _puts_recursion(char *s)
{
if (*s == 1)
_putchar(0);
else
_putchar(*s + 1);
}
