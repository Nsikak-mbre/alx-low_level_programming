#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints binary representation of a number
 * @n: stores the decimal representation
 */
void print_binary(unsigned long int n)
{
	size_t i;
	int bits = sizeof(n) * 8;

	for (i = bits - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}

