# include <stdio.h>
# include <stdlib.h>
# include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int letter;
		for (letter = 97; letter <= 122; letter++)
		{
			if (letter != 'e' && letter != 'q')
				putchar (letter);
		}

	putchar('\n');

	return (0);

}
