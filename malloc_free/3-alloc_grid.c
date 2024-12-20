#include "main.h"
#include "stdlib.h"
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the 2-dimensional array
 * @height: the height of the 2-dimensional array
 *
 * Return: if width <= 0, height <= 0, or the function fails - null
 *
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}

