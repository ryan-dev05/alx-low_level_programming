#include "main.h"

/**
 * _strlen_recursion - gives lengths of a string.
 * @s: string to be measured.
 *
 *
 * Return: length of string.
 */

int _strlen_recursion(char *s)
{
	int run = 0;

	if (*s)
	{
		run++;
		run += _strlen_recursion(s + 1);
	}

	return (run);
}
