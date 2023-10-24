#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - accepts a function as argument
 * @array: function being pointed to
 * @size: self explanatory /  array size
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((array) && (action))
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}


