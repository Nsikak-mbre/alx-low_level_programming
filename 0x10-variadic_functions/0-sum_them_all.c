#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - sums up arguments
 * @n: fixed arg
 * Return: 0 on success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	size_t i, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, unsigned int);
	}
		va_end(ptr);
		return (sum);
}



