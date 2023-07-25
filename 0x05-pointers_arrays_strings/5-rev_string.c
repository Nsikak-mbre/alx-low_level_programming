#include "main.h"
#include <string.h>
/**
 *  *  *rev_string - reverse string
 *   *   * @s: the character
 *    *    * Return: nothing
 */
void rev_string(char *s)
{
int i;
int strLent = strlen(s);
for (i = strLent - 1; i >= 0; i--)
{
_putchar(s[i]);
}
}


