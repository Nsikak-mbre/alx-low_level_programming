#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Join two strings
 * @s1: string 1
 * @s2: string 2
 * @n: lengt to be added
 * Return: joined string & 0 on success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *joined;
	size_t s1_len = 0, s2_len = 0, count;
	
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;
	if (n >= s2_len)
		n = s2_len;

	joined = malloc((s1_len + n + 1) * sizeof(char));

	if (joined == NULL)
		return (NULL);
	for (count = 0; count < s1_len; count++)
	{
		joined[count] = s1[count];
	}
	for (; count < s1_len + n; count++)
	{
		joined[count] = s2[count - s1_len];
	}
	joined[count] = '\0';

	return joined;
}



