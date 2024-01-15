#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates array
 * @size: specifies array size
 * @c: specifies character to fill up array
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}


