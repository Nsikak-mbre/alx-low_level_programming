#include "function_pointers.h"

/**
 * array_iterator - interacts with each element in array
 * @array: contains element
 * @size: Unsigned int, portraying array size
 * @action: pointer to function 
 * Return: 0 on success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !size || !action)
		return;
	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}
