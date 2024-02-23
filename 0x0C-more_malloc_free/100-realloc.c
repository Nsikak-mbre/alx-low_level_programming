#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _realloc - re-allocates memory
 * @ptr: points to previous malloc
 * @old_size: size of old space
 * @new_size: new size to be addedd
 * Return: thing, void function
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *realloc;
	size_t min_size;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	realloc = malloc(new_size);
	if (realloc == NULL)
	{
		return (NULL);
	}
	min_size = old_size < new_size ? old_size : new_size;
	memcpy(realloc, ptr, min_size);
	free(ptr);
	return (realloc);
}
