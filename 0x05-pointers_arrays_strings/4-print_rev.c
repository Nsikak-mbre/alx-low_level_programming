#include "main.h"
#include <string.h>
/**
 *  *  * print_rev - revrses string character
 *   *   * @s: the character
 */
void print_rev(char *s)
{
int i;
int strLent = strlen(s);
for (i = strLent - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
