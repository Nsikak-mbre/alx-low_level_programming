#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate string
 * @s1: first array
 * @s2: second array
 * @n: size to be copied
 * Return: pointer to new derived string array
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int a, b, size1 = 0, size2 = 0;

	if (!s1 || s1[0] == '\0')
		s1 = "";
	if (!s2 || s2[0] == '\0')
		s2 = "";
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	if (n > size2)
		n = size2;
	arr = malloc(sizeof(char) * (size1 + (n + 1)));
	if (!arr)
		return (NULL);
	for (a = 0; a < size1; a++)
		arr[a] = s1[a];
	for (b = 0; b < n; b++)
	{
		arr[a] = s2[b];
		a++;
	}
	arr[a] = '\0';
	return (arr);
}

