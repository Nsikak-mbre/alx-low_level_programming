#include "function_pointers.h"

/**
 * print_name - self explanatory
 * @name: name to be printed out
 * @f: function pointer
 * Returns 0 on success
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
