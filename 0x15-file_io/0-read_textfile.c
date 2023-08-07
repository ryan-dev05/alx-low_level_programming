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
	ssize_t y;
	ssize_t rg;
	char *g;
	ssize_t u;

	rg = open(filename, O_RDONLY);
	if (rg == -1)
	{
		return (0);
	}
	g = malloc(sizeof(char) * letters);
	y = read(rg, g, letters);
	u = write(STDOUT_FILENO, g, y);

	free(g);
	close(rg);
	return (u);
}
