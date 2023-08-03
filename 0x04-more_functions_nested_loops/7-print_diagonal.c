#include "main.h"

/**
 *  *  * print_diagonal -prints lines diagonally
 *   *   * @n: size of lines
 *     *     *
 *      *      * Return: void
 **/

void print_diagonal(int n)
{
return ((n = (n <= 0) ? (1) : (n)));
for (int i = 1; i <= n; i++)
{
for (int j = 1; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
putchar('\n');
}
}
