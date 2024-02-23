#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: size
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memmeory
 * @nmemb:contain element in array
 * @size: size of elements
 * Return: 0 on succcess
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *first_elem_ptr;
	size_t total_elem_size;

	if ((size || nmemb) == 0)
		return (NULL);
	total_elem_size = nmemb * size;
	first_elem_ptr = malloc(total_elem_size);
	if (first_elem_ptr == NULL)
		return (NULL);
	_memset(first_elem_ptr, 0, total_elem_size);
	return (first_elem_ptr);
}

