
#include "stdio.h"
/**
 * main - prints its name, followed by a new line.
 * @argc: the number of arguments
 * @argv: an array of pointer to the arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
