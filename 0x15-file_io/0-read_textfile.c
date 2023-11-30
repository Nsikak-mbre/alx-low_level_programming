#include "main.h"

/**
 * read_textfile - Reads a given file
 * @filename: Self explanatory, points to file-name
 * @letters: Number of characters to print from above
 * Return: Output of the above
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int desc;
	ssize_t nread_, nwrite_;
	char *buff;

	if (filename == NULL)
		return (0);

	desc = open(filename, O_RDONLY);

	if (desc == -1)
		return (0);
	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
		return (0);
	nread_ =  read(desc, buff, letters);
	nwrite_ = write(STDOUT_FILENO, buff, nread_);

	close(desc);

	free(buff);
	return (nwrite_);
}




