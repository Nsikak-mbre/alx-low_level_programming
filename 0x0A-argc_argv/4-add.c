#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int sum = 0, row, col;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (row = 1; row < argc; row++)
	{
		for (col = 0; argv[row][col] != '\0'; col++)
		{
			if (!isdigit(argv[row][col]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[row]);
	}
	printf("%d\n", sum);
	return (0);
}




