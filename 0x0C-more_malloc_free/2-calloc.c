#include "main.h"
#include <stdlib.h>

/**
 * _calloc - defines a calloc function
 * @nmeb: num of item
 * @size: size in bytes
 * Return: NULL on failure, pointer on success
 */

void *_calloc(unsigned int nmeb, unsigned int size)
{
	char *a;
	unsigned int ab = 0;

	if (nmeb <= 0 || size <= 0)
		return (NULL);
	a = malloc(nmeb * size);
	if (a == NULL)
		return (NULL);
	while (ab < (nmeb * size))
	{
		a[ab] = 0;
		ab++;
	}
	return (a);
}
