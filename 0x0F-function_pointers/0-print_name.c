#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - self explanatory
 * @name: pointer containing name
 * @f: pointer to name function
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name) && (f))
		f(name);
}
