#include "3-calc.h"
/**
 * main - Main, calls program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int first_num, second_num, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	first_num = atoi(argv[1]);
	second_num = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && second_num == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(first_num, second_num);
	printf("%d\n", result);
	return (0);
}



