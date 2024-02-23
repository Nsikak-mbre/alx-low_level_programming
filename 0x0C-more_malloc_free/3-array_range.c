#include "main.h"
#include <stdlib.h>
/**
 * array_range - places element in a hierachy in an array(min-max)
 * @min: smallest elem value
 * @max: largest elem value
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	size_t arr_size, i;

	if (min > max)
		return (NULL);
	arr_size = max - min + 1;
	ptr = malloc(sizeof(int) * arr_size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < arr_size; i++)
	ptr[i] = min + i;

	return (ptr);
}
