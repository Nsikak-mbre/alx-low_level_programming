#include "main.h"
/**
 *  *  * print_rev - revrses string character
 *   *   * @s: the character
 */
void print_rev(char *s)
{
while (*s == '\0')
{
_putchar(*s);
s--;
}
_putchar('\n');
}
