#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates multiple blocks
 * @nmemb: number of wanted mem blocks
 * @size: size for each allocated blocks
 * Return: 0 on success | null when unsuccessful
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int count = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	while (count < nmemb * size)
	{
		p[count] = 0;
		count++;
	}
	return (p);
}
