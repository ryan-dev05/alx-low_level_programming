#include "main.h"
/**
 * append_text_to_file - function to append a text at the end of a file
 * @text_content:the string to add at the end
 * @filename: name of the file
 *
 * Return: 1 on succes and -1 on fail
 * filename is NULL -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int u, k, fub = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (fub = 0; text_content[fub];)
			fub++;
	}

	u = open(filename, O_WRONLY | O_APPEND);
	k = write(u, text_content, fub);

	if (u == -1 || k == -1)
	{
		return (-1);
	}

	close(0);

	return (1);
}
