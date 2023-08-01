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
int i = n;
while (i <= 98)
{
printf("%d, ", i);
i++;
}
printf("%d\n", 98);
}
