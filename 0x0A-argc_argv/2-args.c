#include <stdio.h>

/**
 * main - prints argument strings
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int args;

	for (args = 0; args <= argc - 1; args++)
	{
		printf("%s\n", argv[args]);
	}
	return (0);
}

