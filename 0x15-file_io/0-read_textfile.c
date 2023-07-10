#include "main.h"

/**
 * read_textfile - function thats reads text files
 * @filename: file that is being read
 * @letters: letters to be read
 *
 * Return: actual number it could read
 * if NULL 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t t;
	ssize_t le;
	char *mes;
	ssize_t l;

	le = open(filename, O_RDONLY);
	if (le == -1)
	{
		return (0);
	}
	mes = malloc(sizeof(char) * letters);
	t = read(le, mes, letters);
	l = write(STDOUT_FILENO, mes, t);

	free(mes);
	close(le);
	return (l);
}
