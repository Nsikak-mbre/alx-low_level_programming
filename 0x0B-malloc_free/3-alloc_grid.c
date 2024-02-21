#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - points to a two dimensional arr
 * @width: array's width
 * @height: array's height
 * Return: 0, on success. Null otherwise
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int row, x, y, i;

	if (width == 0 || height == 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		ptr[row] = malloc(sizeof(int) * width);

		if (ptr[row] == NULL)
		{
			for (i = 0; i < row; i++)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			ptr[x][y] = 0;
		}
	}
	return (ptr);
}


