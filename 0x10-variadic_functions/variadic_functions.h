#ifndef __VARIADIC_FUNCTIONS_H__
#define __VARIADIC_FUNCTIONS_H__
#include <stdarg.h>
/**
 * FormatSpecifier - typedef
 */
typedef struct FormatSpecifier formatSpecifiers

/**
 * struct - Format specifiers
 * @formatSpecifier: character representing the format
 * @printFunction: pointer to a printing function
 */
struct FormatSpecifier
{
	char formatSpecifier;
	void (*printFunction)(va_list);
};

void printChar(va_list valist);
void printInt(va_list valist); 
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printFloat(va_list valist);
void printString(va_list valist);

#endif
