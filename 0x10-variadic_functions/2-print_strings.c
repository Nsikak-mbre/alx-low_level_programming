#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @seperator: ponter to parameter
 * @n: argument
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;
	char *s;

	va_start(valist, n);

	for (a = 0; a < n; a++)
	{
		s = va_arg(valist, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (a < n - 1)
			if (seperator)
				printf("%s", seperator);
	}
	printf("\n");
	va_end(valist);
}
