#include <stdio.h>

/**
 * main - Prints my arguments
 * @argc: The amount
 * @argv: An Aarrya of arguments
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter  = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}
	return (0);
}
