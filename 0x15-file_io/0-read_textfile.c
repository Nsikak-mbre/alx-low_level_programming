#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - read text from a file
 * @filename: file containing text
 * @letters: number of byte to read
 * Return: printed chars count and text on success | 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int id;
	ssize_t b_read, b_written;
	char *buff;

	id = open(filename, O_RDONLY);
	if (id == -1)
		return (0);
	buff = malloc(letters + 1);
	if (buff == NULL)
	{
		close(id);
		return (0);
	}

	b_read = read(id, buff, letters);
	if (b_read == -1)
	{
		close(id);
		return (0);
	}

	buff[b_read] = '\0';

	b_written = write(STDOUT_FILENO, buff, b_read);
	if (b_written == -1)
	{
		free(buff);
		close(id);
		return (0);
	}
	free(buff);
	close(id);

	return (b_written);
}
