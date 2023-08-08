#include "main.h"

/**
 *  * _puts_recursion - works as standard puts
 *   * @s: the argument
 *    * Return: returns a string
 **/

void _puts_recursion(char *s)
{
while (*s != '\0')
{
_putchar(*s);
s++;
}
_putchar('\n');
}
