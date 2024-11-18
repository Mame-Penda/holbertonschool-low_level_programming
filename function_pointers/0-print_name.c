#include "function_pointers.h"
#include "print_name.h"
/**
 * Prints_name - write a function prints a name.
 * @name: the name to be printed
 * @f: a pointer to a function that prints a name
 *Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0) 
		f(name);
}
