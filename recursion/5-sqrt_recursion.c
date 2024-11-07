#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: natural square root
 * @guess: the number until + 1 guess * guess = n
 *
 * Return: guess
 *
 */
int _sqrt_recursion(int n guess)
{
	if ((guess * guess) > n)
		return (-1);
	else if ((guess * guess) == n)
		return (guess);
	else 
		return (_sqrt(n, guess +1));
}
/**
 *  _sqrt_recursion - go into the  _sqrt to calculate
 *  @n: number you want to know the square
 *  Return: -1 if n < 0 else goes inside sqrt
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, 0));
}
