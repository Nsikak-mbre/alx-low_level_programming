#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - self explanatory
 * @separator: in between numbers
 * @n: number to be passed to function
 * Return: 0 on success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	size_t i;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ptr, n);
	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(ptr, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ptr);
	printf("\n");
}
