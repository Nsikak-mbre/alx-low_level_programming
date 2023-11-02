#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings
 * @s1: first string
 * @s2: secind string
 * Return: 0 & newly concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *jointstringA;
	int size1 = 0, size2 = 0, count1, count2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	jointstringA = malloc(1 + (size1 + size2) * sizeof(char));
	if (jointstringA == NULL)
		return (NULL);
	for (count1 = 0; count1 < size1; count1++)
		jointstringA[count1] = s1[count1];
	for (count2 = 0; count2 < size2; count1++)
	{
		jointstringA[count1] = s2[count2];
		count2++;
	}
	jointstringA[count1] = '\0';
	return (jointstringA);
}


