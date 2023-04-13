#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int k = 0;

	while (s[k])
	{
		if (s[k] < '0' || s[k] > '9')
			return (0);
		k++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int log1, log2, log, g, karry, dig1, dig2, *res, b = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	log1 = _strlen(s1);
	log2 = _strlen(s2);
	log = log1 + log2 + 1;
	res = malloc(sizeof(int) * log);
	if (!res)
		return (1);
	for (g = 0; g <= log1 + log2; g++)
		res[g] = 0;
	for (log1 = log1 - 1; log1 >= 0; log1--)
	{
		dig1 = s1[log1] - '0';
		karry = 0;
		for (log2 = _strlen(s2) - 1; log2 >= 0; log2--)
		{
			dig2 = s2[log2] - '0';
			karry += res[log1 + log2 + 1] + (dig1 * dig2);
			res[log1 + log2 + 1] = karry % 10;
			karry /= 10;
		}
		if (karry > 0)
			res[log1 + log2 + 1] += karry;
	}
	for (g = 0; g < log - 1; g++)
	{
		if (res[g])
			b = 1;
		if (b)
			_putchar(res[g] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
