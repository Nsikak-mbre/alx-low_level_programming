#include <stdio.h>
#include  "search_algos.h"
/**
* linear_search - Performs a linear search
* @array: Points to first elem in array
* @size: specify size of array
* @value: Value to search for
* Return: Always exit_success
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	if (array == NULL)
		return (-1);
	for (i = 0; i < size; ++i)
{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	if (array[i] == value)
		return (array[i]);
}
return (-1);
}
