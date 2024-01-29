#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat -  join two strings
 * @s1: contains first string
 * @s2: contains second string
 * @n: size to be copied
 * Return: 0 on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	size_t i, j, size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	ptr = malloc(sizeof(char) * (size1 + (n + 1)));

	if (n > size2)
	{
		n = size2;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		ptr[i++] = s2[j];
	}

	ptr[i] = '\0';
	return (ptr);
}




