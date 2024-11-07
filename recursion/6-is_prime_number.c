#include "main.h"
/**
 * helper - search a divide
 * @n: the number you want do divide
 * @i: the number divide
 * Return: itself
 *
 */
int helper(int n, int i)
{
	if (n < 0)
		return (0);
	else if (i > 0)
	{
		if (n % i == 0)
			return (0);
		else if (n % i != 0)
			return (1);
	}
return (helper(n, i - 1));
}
/**
 * is_prime_number - 1 the input integer is a prime number, otherwise return 0
 * @n: the number you want do divide
 * Return: itself
 */
int is_prime_number(int n)
{
return (helper(n, 2));
}
