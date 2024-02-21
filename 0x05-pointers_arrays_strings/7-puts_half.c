#include "main.h"
#include <string.h>
/**
 * puts_half - self-explanatory
 * @str: arguments container
 */


void puts_half(char *str)
{
	int str_len = strlen(str);
	int half;
	int i;

	if (str_len % 2 != 0)
		half = str_len / 2 + 1;
	else
		half = str_len / 2;
	for (i = half; i < str_len; i++)
		_putchar(str[i]);

	_putchar('\n');
}

