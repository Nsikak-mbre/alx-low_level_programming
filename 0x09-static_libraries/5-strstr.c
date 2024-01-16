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
	int i = 0;

	while (*haystack)
	{
		while (haystack[i] && needle[i] && haystack[i] == needle[i])
			i++;
		if (!needle[i])
			return (haystack);
		haystack++;
	}
	return (NULL);
}
