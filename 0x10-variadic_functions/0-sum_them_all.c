#include "variadic_functions.h"
/**
 * sum_them_all - sums of arguments
 * @n: quantity of parameters
 * Return: product of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int add = 0;
	va_list list;

	va_start(list, n);

	for (a = 0; a < n; a++)
		add += va_arg(list, int);
	va_end(list);
	return (add);
}
