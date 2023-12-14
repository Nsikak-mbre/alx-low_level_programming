#include "main.h"
#include <string.h>

void puts_half(char *str)
{
	int str_len = strlen(str);
	int half = str_len / 2;
	int i;

	if (str_len % 2 != 0)
	{
		for (i = half; i < str_len; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = half; i < str_len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}

