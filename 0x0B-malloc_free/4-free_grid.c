#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free allocated mem
 * @grid: pointer from prev function
 * @height: number of col
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
