#include "main.h"

/**
 *  *  * _puts_recursion - output strings
 *   *   * @s: char string array
 *     *     * Return: actual string
 **/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}
