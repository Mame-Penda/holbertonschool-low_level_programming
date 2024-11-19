#include "function_pointers.h"
/**
 * print_name - prints a name  using the provided function
 * @name: the name to be printed
 * @f: a pointer to a function that prints a name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
