#include "main.h"
#include <stddef.h>
/**
 * _strstr - will explain later
 * @haystack: string that may contain needle char
 * @needle: char to check against haystack
 * Return: pointer to matched char on success, NULL otherwise
 */


char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *ptr = NULL;

	for (i = 0; needle[i] != 0; i++)
	{
		for ( j = 0; haystack[j] != 0; j++)
		{
			if (needle[i] == haystack[j])
			{
				ptr = &haystack[j];
				return (ptr);
			}
		}

	}
	return (ptr);
}
