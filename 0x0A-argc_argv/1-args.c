#include <stdio.h>
/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 on succes
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
