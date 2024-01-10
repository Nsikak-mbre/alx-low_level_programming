#include "variadic_functions.h"
#include <stdarg.h>

/**
 * printChar - prints characters
 * @valist: array containing char
 */
void printChar(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * printInt - prints int
 * @valist: array containing int
 */
void printInt(va_list valist)
{
	printf("%d", va_arg(valist, int));
}


/**
 * printFloat - prints float
 * @valist: array containing float
 */
void printFloat(va_list valist)
{
	printf("%f", va_arg(valist, double));
}


/**
 * printString - prints strings
 * @valist: array containing string
 */
void printString(va_list valist)
{
	char *str = va_arg(valist, char *);

	if (!str)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", str);
	}
}
