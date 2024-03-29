#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: decimal value
 * @index: binary postion being set to 1
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	*n |= mask;
	return (1);
}

