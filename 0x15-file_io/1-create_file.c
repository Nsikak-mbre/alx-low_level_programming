#include "main.h"

/**
 * create_file - Self explanatory
 * @filename: same here too
 * @text_content: All self explanatory terms
 * Return: created files and codes according to true or false
 */

int create_file(const char *filename, char *text_content)
{
	int desc;
	ssize_t n_wri, sum_wri, n_cha = 0;

	if (filename == NULL)
		return (-1);

	desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (!desc)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[n_cha])
		n_cha++;

	sum_wri = 0;
	while (sum_wri < n_cha)
	{
		n_wri = write(desc, text_content + sum_wri, n_cha - sum_wri);

		if (n_wri == -1)
		{
			close(desc);
			return (-1);
		}
		sum_wri += n_wri;
	}
	close(desc);
	return (1);
}
