#include <stdlib.h>
#include "main.h"
/**
 * create_array - makes new array, with chose chararcters
 * @size: number of items in new array
 * @c: selected char to populare arr
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int count;
	char *newarr;

	if (size == 0)
	{
		return (NULL);
	}
	newarr = malloc(sizeof(char) * size);
	if (newarr == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < size; count++)
	{
		newarr[count] = c;
	}
	return (newarr);
}


