#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - creates a duplicates string
 * @str: array with original string
 * Return: pointer with copy of orginal string
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *copy;

	if (!str)
		return (NULL);
	while (str[len] != '\0')
		len++;
	copy = malloc(sizeof(char) * len + 1);

	if (!copy)
		return (NULL);
	for (i = 0; i <= len; i++)
		copy[i] = str[i];
	return (copy);
}

