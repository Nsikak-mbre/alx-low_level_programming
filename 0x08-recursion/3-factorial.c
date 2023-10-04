#include "main.h"

/**
 *  *  *factorial - of a given number
 *   *   * @n: argument to be factorized
 *     *     * Return:result of factorized number multiplied
 **/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

