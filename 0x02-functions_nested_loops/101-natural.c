#include <stdio.h>

/**
  * main - check the code
  *Return: Always 0.
  */

int main(void)
{
	int sum, first, second;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			first = first + i;
		}
		else if ((i % 5) == 0)
		{
			second = second + 1;
		}

	}
	sum = first + second;
	printf("%i\n", sum);
	return (0);
}
