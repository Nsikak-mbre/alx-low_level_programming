#include "main.h"
/**
 *  *  * _puts - prints string followed by new line
 *   *   *@str: the character
 *    *    * Return: 0
 **/

void _puts(char *str)
{
_while(*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
