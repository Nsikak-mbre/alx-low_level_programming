#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - self explanatory
 * @name: name to be printed out
 * @f: function pointer
 * Returns 0 on success
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
