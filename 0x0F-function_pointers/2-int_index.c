#include "function_pointers.h"
/**
 * int_index - conpares elements index
 * @array: contains elements
 * @size: self explanatory
 * @cmp: points to comparison function
 * Return: 0 on success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index = -1;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) !=  0)
		{
			index = i;
			break;
		}
	}
	return (index);
}

