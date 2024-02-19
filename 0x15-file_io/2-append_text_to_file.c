#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - self explanatory
 * @filename: points to file
 * @text_content:self explanatory
 * Return: 1 on success -1 oon failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	size_t len = 0;
	int id;
	ssize_t written;

	if (filename  == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	id = open(filename, O_WRONLY | O_APPEND);
	if (id == -1)
		return (-1);

	while (text_content[len] != '\0')
		len++;
	written = write(id, text_content, len);
	if (written == -1)
		return (-1);
	else
		return (1);
}



