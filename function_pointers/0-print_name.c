#include "function_pointers.h"
#include "print_name.h"
/**
 * print_name - prints a name  using the provided function
 * @name: the name to be printed
 * @f: a pointer to a function that prints a name
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
