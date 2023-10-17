#include "main.h"
#include <stdlib.h>

/**
 * array_range - outputs a certain range
 * @min: self explaning first argument
 * @max: self explaining second arg
 * Return: newly created array
 */

int *array_range(int min, int max)
{
	int *result;
	int a = 0, b, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;

	result = malloc(size * sizeof(int));

	if (result == NULL)
		return (NULL);
	for (b = min; b <= max; b++)
	{
		result[a] = b;
		a++;
	}
	return (result);
}


