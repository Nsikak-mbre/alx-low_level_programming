#include "main.h"
#include <string.h>
/**
 *  *  *puts2 - prints every other number
 *   *   * @str: the character
 *    *    * Return: void function
 **/
void puts2(char *str)
{
	int i = 0;
	int length =  strlen(str);

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
