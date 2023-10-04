#include <stdio.h>

/**
 *  *  *main - commandline argument
 *   *   * @argc: argument counter
 *	 **@argv: argument string
 *     *     * Return: whatver the function says
 **/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
