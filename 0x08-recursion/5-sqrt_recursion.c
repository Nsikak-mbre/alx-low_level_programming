#include "main.h"
#include <stdio.h>

/**
 * _sqrt - calc sqrt of number
 * @n: check for sqrt of arg
 * @b: guesses
 * Return: sqrt of n
 */
int _sqrt(int n, int b)
{
	if ((b * b) == n)
		return (b);
	if (b * b > n)
		return (-1);
	return (_sqrt(n, (b + 1)));
}

/**
 * _sqrt_recursion - calc natural square root of given number
 * @n: given number
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt(n, 1));
}
