#include "main.h"

/**
 *  *  *_strlen_recursion - output length
 *   *   * @s: char string array
 *     *     * Return:string-length
 **/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
