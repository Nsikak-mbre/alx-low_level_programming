#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - self explanatory
 * @separator: inbetwwn each string
 * @n: argument count
 * Return:list of given string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list item;

	va_start(item, n);
	for (a = 0; a < n; a++)
	{
		char *str = va_arg(item, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && a < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(item);
	printf("\n");
}
