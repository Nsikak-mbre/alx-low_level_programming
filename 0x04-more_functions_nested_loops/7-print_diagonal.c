#include "main.h"

/**
 *  *  * print_diagonal -prints lines diagonally
 *   *   * @n: size of lines
 *     *     *
 *      *      * Return: void
 **/

void print_diagonal(int n)
{
if (n <= 0)
_putchar('\n');

for (int i = 0; i < n; i++)
{
for (int j = 0; j < i; j++)
_putchar(' ');

_putchar('\\');
_putchar('\n');

}
}
