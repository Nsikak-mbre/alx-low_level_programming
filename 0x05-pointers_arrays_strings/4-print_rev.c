#include "main.h"
/**
 *  *  * print_rev - revrses string character
 *   *   * @s: the character
 */
void print_rev(char *s)
{
int strLent = strlen(s);
for (int i = strLent - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
