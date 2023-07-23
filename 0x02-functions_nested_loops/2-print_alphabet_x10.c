#include "main.h"

/**
 *  *  * print_alphabet_x10 - prints lower case alphabet 10 times
 *   *   *
 *    *    * Return: o
 */

void print_alphabet_x10(void)
{
for (int j = 0; j <= 9; j++)
{
for (int i = 'a'; i <= 'z' ; i++)
putchar(i);
}
putchar('\n');
}
return (0);
}
