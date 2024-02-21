#include "main.h"

/**
 *  *  *_strcpy - returns a pointer
 *   *   * @dest: copy of a pointer
 *   *   * @src: original pointer
 *   *   *Return: pointer to pointer
 */

char *_strcpy(char *dest, char *src)
{
	char *new_dest =  dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (new_dest);
}

