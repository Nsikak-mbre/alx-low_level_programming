#include <stdio.h>
#include <stdlib.h>

/**
 *  *  *main - commandline argument
 *   *   * @argc: argument counter
 *	 **@argv: argument string
 *     *     * Return: whatver the function says
 **/

int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int firstNumber = atoi(argv[1]);
		int secondNumber = atoi(argv[2]);

		if (argc == 3)
		{
			product = firstNumber * secondNumber;
			printf("%d\n", product);
		}
	}
	return (0);
}
