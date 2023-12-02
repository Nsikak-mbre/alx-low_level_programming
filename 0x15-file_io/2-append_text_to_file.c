#include "main.h"

/**
 * append_text_to_file - Append text to existing file
 * @filename: Self explanatory
 * @text_content: File content
 * Return: 1 on success -1 if not, appended file ofcourse
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int desc, len, cpy_wrd;

	if (filename == NULL)
		return (-1);

	desc = open(filename, O_WRONLY | O_APPEND);

	if (!desc)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;

		cpy_wrd = write(desc, text_content, len);

		if(cpy_wrd == -1)
			return (-1);
	}
	close(desc);
	return (1);
}
