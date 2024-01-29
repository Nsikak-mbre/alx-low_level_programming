#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat -  join two strings
 * @s1: contains first string
 * @s2: contains second string
 * Return: 0 on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, size2 = 0, both;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	while(s1 != '\0' && s2 != '\0')
	{
		s1++;
		s2++;
		both = s1 + s2;
	}

	ptr = malloc(both * sizeof(char) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	if (n >= s2)
	{
		n = s2;
	}

	for (i = 0; i <= s1; i++)
	{
		ptr[i] = s1[i];
	}
	for ( i = 0; i <= n; i++)
	{
		ptr[i] = s2[i];
	}

	ptr = '\0';
	return (ptr);
}

