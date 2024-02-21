#include <stdio.h>
/**
 * main - prints function name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[argc - 1]);
	}
	return (0);
}
