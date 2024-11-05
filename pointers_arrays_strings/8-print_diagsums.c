#include "main.h"
#include "stdio.h"
/**
 * print_diagsums -  prints the sum of the two diagonals of a square matrix of integers.
 * @size: the size of the matrix
 * @a: matrix to be summed 
 */
void print_diagsums(int *a, int size)
{
	int d1 = 0, d2 = 0;
	for (int i = 0; i < n; i++)
	{
		d1 += mat[i,i];
		dé += mat[i, n - i -1];
		
	}
	return ("%d, "%d\n
