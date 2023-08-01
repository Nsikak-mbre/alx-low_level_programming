#include "main.h"
#include <stdio.h>

/**
 *  *  * print_to_98 - print sum of diagonals in an array
 *   *   * @n: argument
 *     *     *
 *      *      * Return: void
 **/

void print_to_98(int n)
{
if (n >= 0)
{
for (int i = n; i <= 98; i++)
{
_putchar(i);
}
}
else
{
for (int j = n; j <= 98; j++)
{
_putchar(j);
}
}
_putchar('\n');
}

