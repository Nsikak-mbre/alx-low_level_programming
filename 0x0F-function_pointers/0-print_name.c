#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - outputs user name
 * @name: holds name to output
 * @f: pointer to name array
 */

void print_name(char *name, void (*f)(char *))
{
	if (name)
	f(name);
}
