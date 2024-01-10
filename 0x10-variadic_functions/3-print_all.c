#include "variadic_functions.h"
#include <stdio.h>
#include "functions.c"
#include <stdarg.h>
/**
 * print_all -  self explanatory
 * @format: argument passed to function
 */
void print_all(const char * const format, ...)
{
	unsigned int count;
	va_list arguments;

	unsigned int formatIndex = 0, specifiersIndex;
	int valuePrintedFlag = 0;

	const char validFormatS[] = "cifs";

	va_start(arguments, format);
	while (format && format[formatIndex])
	{
		specifiersIndex = 0;

		while (validFormatS[specifiersIndex])
		{
			if (format[formatIndex] == validFormatS[specifiersIndex] && valuePrintedFlag)
			{
				printf(", ");
				break;
			}
			specifiersIndex++;
		}
		formatSpecifiers[] = {
			{'c', printChar},
			{'i', printInt},
			{'f', printFloat},
			{'s', printString}
		};
		for (count = 0; count < sizeof(formatSpecifiers) / sizeof(formatSpecifiers[0]); count++)
		{
			if (format[formatIndex] == formatSpecifiers[count].formatSpecifier)
			{
				formatSpecifiers[count].printFunction(arguments);
				valuePrintedFlag = 1;
				break;
			}
		}
		formatIndex++;
	}
	printf("\n");
	va_end(arguments);
}






