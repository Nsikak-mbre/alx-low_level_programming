#include "main.h"
#include <stdio.h>

/**
 *  *  * print_diagsums - print sum of diagonals in an array
 *   *   * @a: array to traverse
 *    *    * @size: size of the array
 *     *     *
 * Return: void
 **/

void print_diagsums(int *a, int size)
{
int b, d;
int sum1 = 0, sum2 = 0;
for (b = 0; b < size; b++)
sum1 += a[(size + 1) * b];
for (d = 1; d <= size; d++)
sum2 += a[(size - 1) * d];
printf("%d, %d\n", sum1, sum2);
}
