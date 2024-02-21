#include "main.h"
/**
 * fac 
=======
/**
  * is_prime_helper - helps original function
  * @n: The number to be checked
  * @div: the divisor
  * Return: 0 is succesful
  */

int is_prime_helper(int n, int div)
{
	if (n < 2)
		return (0);

	if (div == 2)
		return (1);

	if (n % 2 == 0)
		return (0);

	if (n % div == 0)
		return (0);

	return (is_prime_helper(n, div - 1));
}

/**
  * is_prime_number -  checks for prime number
  * @n: value to check for
  * Return: always 0
  */

int is_prime_number(int n)
{
	return (is_prime_helper(n, n / 2));
}

