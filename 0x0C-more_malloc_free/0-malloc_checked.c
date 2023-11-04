#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates mem
 * @b: malloc size
 * Return: exist staus (98) for failed malloc
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

