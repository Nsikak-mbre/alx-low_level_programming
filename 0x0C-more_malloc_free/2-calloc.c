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
	char *ptr;
	unsigned int i;

	if (size <= 0 || nmemb <= 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
	{
		ptr[i] = 0;
	}
	ptr[i] = '\0';
	return (ptr);
}

