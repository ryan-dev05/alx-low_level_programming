#include "main.h"
/**
 * set_bit - function that set a bit to a giveen index
 * @n: points to then number to change
 * @index: bit to set to 1
 *
 * Return: 1 for success, -1 for failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);

	return (1);
}
