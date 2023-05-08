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
	int el, k, al = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (al = 0; text_content[al];)
			al++;
	}

	el = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	k = write(el, text_content, al);

	if (el == -1 || k == -1)
	{
		return (-1);
	}

	close(el);

	return (1);
}
