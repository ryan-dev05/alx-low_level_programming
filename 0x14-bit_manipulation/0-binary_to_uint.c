#include "main.h"

/**
 * binary_to_uint - function that converts binary number to unsigned int
 * @b: the binary number
 *
 * Return: the converted number, or 0 if NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int y;
	unsigned int dec = 0;

	if (!b)
	{
		return (0);
	}
	for (y = 0; b[y]; y++)
	{
		if (b[y] < '0' || b[y] > '1')
		{
			return (0);
		}
		dec = 2 * dec + (b[y] - '0');
	}
	return (dec);
}
