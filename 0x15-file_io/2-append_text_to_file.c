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
	int a, e, fug = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (fug = 0; text_content[fug];)
			fug++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	e = write(a, text_content, fug);

	if (a == -1 || e == -1)
	{
		return (-1);
	}

	close(0);

	return (1);
}
