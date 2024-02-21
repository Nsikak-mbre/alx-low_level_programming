#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * print_error - prints error as appropriate
 * @msg: text associated with error
 * @filename: file associated with error
 * @exit_code: error code associated with err
 */

void print_error(const char *msg, const char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, msg, filename);
	exit(exit_code);
}
/**
 * main - copy file contents
 * @argc: argument count
 * @argv: argument vecfile_tor
 * Return: error message on failure, 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buff[BUFF_SIZE];
	ssize_t b_read, written;

	if (argc != 3)
		print_error("Usage: cp file_file_from file_file_to\n", "", 97);

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
		print_error("Error: Can't read file_from file %s\n", argv[1], 98);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		print_error("Error: Can't written file_to %s\n", argv[2], 99);

	while ((b_read = read(file_from, buff, BUFF_SIZE)) > 0)
	{
		written =  write(file_to, buff, b_read);
		if (written == -1)
			print_error("Error: Can't written file_to %s\n", argv[2], 99);
	}

	if (b_read == -1)
		print_error("Error: Can't read file_from file %s\n", argv[1], 98);

	if (close(file_from) == -1)
		print_error("Error: Can't close fd %d\n", argv[1], 100);

	if (close(file_to) == -1)
		print_error("Error: Can't close fd %d\n", argv[2], 100);

	return (0);
}


