#include "main.h"

/**
 *  * _puts_recursion - works as standard puts
 *   * @s: the argument
 *    * Return: returns a string
 **/

void _puts_recursion(char *s)
{
if (*s != '\0')
{
_return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
