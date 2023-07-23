#include "main.h"

/**
 *  *  * print_alphabet_x10 - prints lower case alphabet 10 times
 *   *   *
 *    *    * Return: o
 */

void print_alphabet_x10(void)
{
int j, i;
for (j = 0; j <= 9; j++)
{
for (i = 'a'; i <= 'z' ; i++)
_putchar(i);
}
putchar('\n');
return (0);
}
