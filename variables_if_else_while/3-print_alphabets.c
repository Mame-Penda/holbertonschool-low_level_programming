# include <stdio.h>
# include <time.h>
# include <stdlib.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char alphabets;


	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);

	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
		putchar(alphabets);


	putchar('\n');


	return (0);





}
