#include "main.h"
#include "string.h"
#include "stdio.h"
/**
 * _strlen_recursion -  returns the length of a string.
 * @s: the string to be printed
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
int lenght = 0;
{
lenght++;
lenght +=  _strlen_recursion(s + 1);
}
return (0);
}
