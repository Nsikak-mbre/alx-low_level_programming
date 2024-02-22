#include "main.h"
/**
 * _strspn - checks for occurence len in bytes
 * @s: charcter to look for
 * @accept: where to search for above character
 * Return: lent of found character in byte
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (count);
}

