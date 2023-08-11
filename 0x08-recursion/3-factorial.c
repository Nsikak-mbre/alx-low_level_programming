#include "main.h"

/**
 *  *  *  *  *factorial - factorial of a given number
 *   *   *   *   * @n: the argument
 *    *    *    Return: return sum of factorials
 **/
int factorial(int n)
{
if (n == 0)
return (1);
else if (n < 0)
return (-1);
else
return (n * factorial(n - 1));
}



