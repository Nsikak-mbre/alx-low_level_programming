#include <stdio.h>
/**
 *  *  *main - commandline argument
 *   *   * @argc: argument counter
 *	 **@argv: argument string
 *     *     * Return: whatver the function says
 **/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		argc = argc - 1;
		printf("%d\n", argc);
	}
	return (0);
}
