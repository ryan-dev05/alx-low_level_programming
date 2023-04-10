#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int k, y, m, leng, z, dig;

	k = 0;
	y = 0;
	m = 0;
	leng = 0;
	z = 0;
	dig = 0;

	while (s[leng] != '\0')
		leng++;

	while (k < leng && z == 0)
	{
		if (s[k] == '-')
			++y;

		if (s[k] >= '0' && s[k] <= '9')
		{
			dig = s[k] - '0';
			if (y % 2)
				dig = -dig;
			m = m * 10 + dig;
			z = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			z = 0;
		}
		k++;
	}

	if (z == 0)
		return (0);

	return (m);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, nm1, nm2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	nm1 = _atoi(argv[1]);
	nm2 = _atoi(argv[2]);
	result = nm1 * nm2;

	printf("%d\n", result);

	return (0);
}
