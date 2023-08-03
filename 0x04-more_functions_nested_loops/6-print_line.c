#include "main.h"

/**
 *  *  * print_line
 *   *   * @n: number of times to print underscore
 *     *     *
 *      *      * Return: void
 **/

void print_line(int n)
{
int count;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (count = n; count < n; count++)
{
while (count < n)
_putchar('_');
_putchar('\n');
}
}
}
