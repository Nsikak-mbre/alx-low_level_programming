#include "main.h"

/**
 *  *  *  *squares - calculate naturaal squares
 *   *   *   * @n: the argument
 *   *   *   * @trial: the guess
 *    *    Return: returns a natural sqrt
**/
int squares(int n, int trial)
{
if ((trial * trial) == n)
return (trial);
if ((trial * trial) > n)
return (-1);
return (squares(n, (trial + 1)));
}

/**
   *  *  *  *_sqrt_recursion - natural squares root
   *   *   *   * @n: the argument
   *    *    Return: returns a natural sqrt
**/

int _sqrt_recursion(int n)
{
if (n <= 0)
return (-1);
if (n == 1)
return (1);
return (squares(n, 1));
}
