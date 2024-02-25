#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns a bit from a given position
 * @n: decimal number
 * @index: bit position to be returned
 * Return: bit at index position on success, or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	bit_value = (n & mask) != 0 ? 1 : 0;
	return (bit_value);
}


