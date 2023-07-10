#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @file: the name of the file buffer is storing char for
 *
 * Return: a pointer to the newly-allocated buffer
 */
char *create_buffer(char *file)
{
	char *by;

	by = malloc(sizeof(char) * 1024);

	if (by == NULL)
	{
		dprintf(STDERR_FILENO, "Error:Can't write to %s\n", file);
		exit(99);
	}

	return (by);
}

/**
 * close_file - Closes file descriptors
 * @fd: the file descriptor to be closed
 */
void close_file(int fd)
{
	int o;

	o = close(fd);

	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies content of a file to another file
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointer to the arguments
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int four, tu, t, k;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	four = open(argv[1], O_RDONLY);
	t = read(four, buff, 1024);
	tu = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (four == -1 || t == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		k = write(tu, buff, t);
		if (tu == -1 || k == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		t = read(four, buff, 1024);
		tu = open(argv[2], O_WRONLY | O_APPEND);

	} while (t > 0);

	free(buff);
	close_file(four);
	close_file(tu);

	return (0);
}
