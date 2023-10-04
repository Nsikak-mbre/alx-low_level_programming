#include "main.h"

/**
 *  *  *_pow_recursion - raise x to y
 *   *   * @x: argument to be raised
 *	**@y: times/ power to be raised to
 *     *     * Return:result of raised number
 **/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, (y - 1)));
}
