#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 * Return: the resulting string
 **/

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		while ((s[i] != '\0' && s[i] >= 'A' && s[i] <= 'Z') || (s[i]
			>= 'a' && s[i] <= 'z'))
		{
			i++;
		}
		while (s[i] != '\0' && (!s[i] >= 'A' && s[i] >= 'Z' || s[i] 
			>= 'a' && s[i] <= 'z'))
		{
			i++;
		}
	}
	return (s);
}
