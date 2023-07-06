#include "main.h"

/**
 * binary_to_uint - function that converts binary number to unsigned int
 * @b: the binary number
 *
 * Return: the converted number, or 0 if NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int r;
	unsigned int dec = 0;

	if (!b)
	{
		return (0);
	}
	for (r = 0; b[r]; r++)
	{
		if (b[r] < '0' || b[r] > '1')
		{
			return (0);
		}
		deci = 2 * deci + (b[r] - '0');
	}
	return (dec);
}
