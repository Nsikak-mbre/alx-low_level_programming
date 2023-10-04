#include <stdio.h>

/**
 *  *  *main - commandline argument
 *   *   * @argc: argument counter
 *	 **@argv: argument string
 *     *     * Return: whatver the function says
 **/

int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

