#include <stdlib.h>
#include "main.h"
/**
 * str_concat - joins ttwo strings
 * @s1: first-string
 * @s2: second-string
 * Return: 0 on success, concatenated string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i, j;
	char *dup;

	if (s1 == NULL || s2 == NULL)
		return ("");

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	dup =  malloc((size1 + size2 + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		dup[i] = s1[i];

	for (j = 0; j < size2; j++)
		dup[i + j] = s2[j];

	dup[i + j] = '\0';

	return (dup);
}
