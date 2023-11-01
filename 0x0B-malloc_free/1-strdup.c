#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates a duplicated string
 * @str: array of original string
 * Return: 0 & duplicated string
 */
char *_strdup(char *str)
{
	int count;
	int str_len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);
	while (str[str_len])
		str_len++;
	dup =  malloc(sizeof(char) * str_len + 1);
	if (!dup)
		return (NULL);
	for (count = 0; count < str_len; count++)
		dup[count] = str[count];
	dup[count] = '\0';
	return (dup);
}


