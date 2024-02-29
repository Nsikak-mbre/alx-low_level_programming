#include "main.h"
#include <stdio.h>

/**
 * main - Fizz-Buzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && 1 % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			print("Buzz");
		}
		else
			printf("%d", i);
	}
	if (i < 100)
		printf(" ");
	return (0);
}
