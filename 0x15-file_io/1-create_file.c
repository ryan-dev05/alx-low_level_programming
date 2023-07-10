#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: a string to write
 * Return: if the function fail --1
 * otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int le, a, la = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (la = 0; text_content[la];)
			la++;
	}

	le = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(le, text_content, la);

	if (le == -1 || a == -1)
	{
		return (-1);
	}

	close(le);

	return (1);
}
