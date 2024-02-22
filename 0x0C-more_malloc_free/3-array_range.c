#include "main.h"
#include <stdlib.h>
/**
 * _memset -  copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - Allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each bit
 * Return: newly allocated mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *first_elem_ptr;
	size_t total_elem_size, i;

	if ((nmemb || size) == 0)
		return (NULL);

	total_elem_size = nmemb * size;
	first_elem_ptr = malloc(each_element);
	if (ptr == NULL)
		return (NULL);
	_memset(first_elem_ptr, 0, total_elem_size);

	return (first_elem_ptr);
}
