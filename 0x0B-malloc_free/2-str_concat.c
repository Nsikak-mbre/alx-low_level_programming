#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: contains string one
 * @s2: contains string two
 * Return: pointer with concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *join;
	int a, b;
	int size1 = 0, size2 = 0;

	if (!s1 || s1[0] == '\0')
		s1 = "";
	if (!s2 || s2[0] == '\0')
		s2 = "";
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	join = malloc((size1 + size2 + 1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	for (a = 0; a < size1; a++)
		join[a] = s1[a];
	for (b = 0; b < size2; a++)
	{
		join[a] = s2[b];
		b++;
	}
	join[a] = '\0';
	return (join);
}


