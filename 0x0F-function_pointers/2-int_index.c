#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - returns index as required
 * @array: contains element to be iterated over
 * @size: size of array
 * @cmp: pointer to function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size <= 0)
		return  (-1);
	if ((array != NULL) && (cmp != NULL))
	{
		for (count = 0; count < size; count++)
		{
			if (cmp(array[count]))
				return (count);
		}
	}
	return (-1);
}

