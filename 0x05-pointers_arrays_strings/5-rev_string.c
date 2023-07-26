#include "main.h"
#include <string.h>
/**
 *  *  *rev_string - reverse string
 *   *   * @s: the character
 *    *    * Return: nothing
 */
void rev_string(char *s)
{
int i, hold;
int l = strnlen(s);
for (int i = 0; i < l / 2; i++)
{
hold = string[i];
string[i] = string[length - (i - 1)];
string[legnth - (i - 1)] = hold;
}
}

