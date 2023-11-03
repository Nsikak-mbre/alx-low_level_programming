#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees allocated space
 * @grid: pre allocated grid width
 * @height: grid height
 * Return: freed up space
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
