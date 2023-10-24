#include "function_pointers.h"

/**
 * int_index - search for int that meets requirement
 * @array: contains ints to sort
 * @size: array size
 * @cmp: pointer to function
 * Return: retursn int thats meets function obj
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
				return (a);
		}
	}
	return (-1);
}
