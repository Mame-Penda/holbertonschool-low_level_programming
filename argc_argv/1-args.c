#include "stdio.h"
/**
 * main -  prints the number of arguments passed into it.
 * @argc: number total of arguments
 * @argv: array contains a arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
