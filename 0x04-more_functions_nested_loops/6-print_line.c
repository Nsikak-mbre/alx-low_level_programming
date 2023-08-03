#include "main.h"

/**
 *  *  * print_line - prints line using underscore
 *   *   * @n: number of times to print underscore
 *     *     *
 *      *      * Return: void
 **/

void print_line(int n)
{
while (n != 0)
{
putchar('_');
n--;
}
_putchar('\n');
}
