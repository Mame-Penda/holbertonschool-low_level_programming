#include "main.h"
/**
 * _sqrt - calculate a  square root of a number.
 * @n: natural square root
 * @root: the number until + 1 root * root = n
 *
 * Return: root
 *
 */
int _sqrt(int n, int root)
{
if ((root * root) > n)
return (-1);
else if ((root * root) == n)
return (root);
else
return (_sqrt(n, root + 1));
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
