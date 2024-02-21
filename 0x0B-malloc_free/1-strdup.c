#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: string content
 * Return: 0 on success
 */
char *_strdup(char *str)
{
	char *ptr;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	ptr = malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';

	return (ptr);
}

