#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - self explanatory
 * @separator: houses element to be printed between numbers
 * @n: number count
 * Return: list of given numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list list;

	va_start(list, n);
	if (n > 0)
	{
		printf("%d", va_arg(list, int));
		for (a = 1; a < n; a++)
		{
			if  (separator != NULL && a > 0)
				printf("%s", separator);
			printf("%d", va_arg(list, int));
		}
	}
	va_end(list);
	printf("\n");
}

