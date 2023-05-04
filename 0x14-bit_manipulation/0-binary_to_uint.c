#include "main.h"

/**
 * binary_to_uint - function that converts binary number to unsigned int
 * @b: the binary number
 *
 * Return: the converted number, or 0 if NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int deci = 0;

	if (!b)
	{
		return (0);
	}
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
		{
			return (0);
		}
		deci = 2 * deci + (b[a] - '0');
	}
	return (deci);
}
