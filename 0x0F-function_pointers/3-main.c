#include "3-calc.h"
/**
 * main - calls all functions
 * @argc: argument count
 * @argv: contains argument
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int data1, data2, prod;
	char a;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	data1 = atoi(argv[1]);
	data2 = atoi(argv[3]);

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = *argv[2];

	if ((a == '%' || a == '/') && data2 == 0)
	{
		printf("Error\n");
		exit(98);
	}
	prod = ptr(data1, data2);

	printf("%d\n", prod);
	return (0);
}

