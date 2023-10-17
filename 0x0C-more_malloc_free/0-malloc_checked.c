#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates mem using malloc
 * @b: mem size
 * Return: appropriate termination value
 */

void *malloc_checked(unsigned int b)
{
	void *random;

	random = malloc(b);
	if (random == NULL)
		exit(98);
	return (random);
}

