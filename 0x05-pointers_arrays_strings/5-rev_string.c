#include "main.h"
#include <string.h>
/**
 *  *  *rev_string - reverse string
 *   *   * @s: the character
 *    *    * Return: nothing
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		char temp =  *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}

}
