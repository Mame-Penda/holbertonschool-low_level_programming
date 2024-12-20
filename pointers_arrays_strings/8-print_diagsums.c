#include "main.h"
#include "stdio.h"
/**
 * print_diagsums -  prints the sum of the two diagonals
 * @size: the size of the matrix
 * @a: matrix to be summed
 */
void print_diagsums(int *a, int size)
{
int i;
long int sum1 = 0;
long int sum2 = 0;

for (i = 0; i < size; i++)
{
	sum1 += a[i];
	a += size;
}
a -= size;
for (i = 0; i < size; i++)
{
	sum2 += a[i];
	a -= size;
}
printf("%ld, %ld\n", sum1, sum2);
}
