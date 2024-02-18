#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_file - create a file
 * @filename: points to name of the file
 * @text_content: to be copied to created file
 * Return: -1 on failure, on success new file with required permissions
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t id, written, i, len = 0;
	char *buff;

	if (filename == NULL)
		return (-1);
	id = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (id == -1)
	{
		close(id);
		return (-1);
	}
	if (text_content == NULL)
	{
		close(id);
		return (-1);
	}
	while (text_content[len] != '\0')
		len++;
	buff = malloc(sizeof(char) * len + 1);
	if (buff == NULL)
	{
		close(id);
		return (-1);
	}
	for (i = 0; i < len; i++)
	{
		buff[i] = text_content[i];
	}
	buff[len] = '\0';
	written = write(id, buff, len);
	free(buff);
	close(id);
	if (written == -1)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
