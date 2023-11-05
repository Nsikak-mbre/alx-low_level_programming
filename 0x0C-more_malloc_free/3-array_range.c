#include "main.h"
#include <stdlib.h>
/**
 * array_range - sort items within a range
 * @min: item to start with
 * @max: item to end with
 * Return: pointer on success/ null if not
 */
int *array_range(int min, int max)
{
	int *sort_items;
	int length, count;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	sort_items = malloc(length * sizeof(int));
	if (sort_items == NULL)
		return (NULL);
	for (count = 0; count < length; count++)
		sort_items[count] = min + count;

	return (sort_items);
}
