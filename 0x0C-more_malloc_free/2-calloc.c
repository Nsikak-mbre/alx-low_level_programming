#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memmeory
 * @nmemb:contain element in array
 * @size: size of elements
 * Return: 0 on succcess
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(unsigned int) * size + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = nmemb;
	}
	ptr[i] = '\0';
	return (ptr);
}

