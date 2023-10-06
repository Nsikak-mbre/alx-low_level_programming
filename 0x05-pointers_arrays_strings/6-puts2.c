#include "main.h"
/**
 *  *  *puts2 - prints every other number
 *   *   * @str: the character
 *    *    * Return: void function
 **/
void puts2(char *str)
{
	int i = 0;

	while  (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
