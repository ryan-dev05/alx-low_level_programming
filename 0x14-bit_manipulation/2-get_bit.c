#include "main.h"
/**
 * get_bit - function that return the valu of a bit
 * @n: nnum to search
 * @index: index of the bit
 *
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int beats;

	if (index > 63)
	{
		return (-1);
	}

	beats = (n >> index) & 1;

	return (beats);
}
