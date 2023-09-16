#include "main.h"
#include <string.h>

/**
 *  *  * puts_half - divides string in half and print second half
 *   *   * @str: the character
 */

void puts_half(char *str)
{
	int len = strlen(str);

	if (len % 2 == 0)
	{
		int start =  len / 2, i;

		for (i = start; i < len; i++)
			_putchar(str[i]);
	}
	else if (len % 2 > 0)
	{
		int start = (len - 1) / 2, j;

		for (j = start; j < len; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
