#include <string.h>
#include "function_pointers.h"


/**
 * array_iterator - as the name implies
 * @size: array size
 * @action: pointer to function to use
 * @array: array containing elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;

	if ((action != NULL) && (array != NULL))
	{
		for (count = 0; count < size; count++)
		{
			action(array[count]);
		}
	}
}
