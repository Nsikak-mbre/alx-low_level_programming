#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free's dynamically allocated grid
 * @grid: previously allocated grid
 * @height: grid height
 * Return: 0 on success
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


