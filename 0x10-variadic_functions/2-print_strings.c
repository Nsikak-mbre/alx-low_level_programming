#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>


/**
 * print_strings - self explanatory
 * @separator: plcaed in=between strings
 * @n: arg count
 * Return: 0 on success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	size_t i;
	char *temp;

	if (separator == NULL)
	{
		return;
	}
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(ptr, char *);

		if (temp != NULL)
		{
			printf("%s", temp);
		}
		else
		{
			printf("nil");
		}
		if (i < n - 1)
		{
			printf("%s", separator);
		}

	}

		va_end(ptr);
		printf("\n");
}


