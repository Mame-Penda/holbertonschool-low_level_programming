#include "main.h"
#include "stdio.h"
/**
 * factorial -  returns the factorial of a given number.
 * @n: number to find the factorial
 * Return: resultat
 *
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
