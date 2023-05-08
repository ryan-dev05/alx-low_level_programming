#include "main.h"

/**
 * read_textfile - function thats reads text file
 * @filename: file that is being read
 * @letters: letters to be read
 *
 * Return: actual number it could read
 * if Null 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a;
	ssize_t el;
	char *leo;
	ssize_t k;

	el = open(filename, O_RDONLY);
	if (el == -1)
	{
		return (0);
	}
	leo = malloc(sizeof(char) * letters);
	a = read(el, leo, letters);
	k = write(STDOUT_FILENO, leo, a);

	free(leo);
	close(el);
	return (k);
}
