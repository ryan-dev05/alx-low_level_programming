#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int nm, k, res;
	int coi[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nm = atoi(argv[1]);
	res = 0;

	if (nm < 0)
	{
		printf("0\n");
		return (0);
	}

	for (k = 0; k < 5 && nm >= 0; k++)
	{
		while (nm >= coi[k])
		{
			res++;
			nm -= coi[k];
		}
	}

	printf("%d\n", res);
	return (0);
}
