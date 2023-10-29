#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two int arguments
 * @argc: int 1
 * @argv: int 2
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int start, second, mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	start =  atoi(argv[1]);
	second = atoi(argv[2]);
	mul =  start * second;

	printf("%d\n", mul);
	return (0);
}


