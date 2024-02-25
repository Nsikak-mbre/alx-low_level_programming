#include "main.h"
#include <stdio.h>
/**
 * flip_bits - self explanatory
 * @n: decimal representation
 * @m: number of bit
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count = 0;

	result =  n ^ m;
	while (result)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
