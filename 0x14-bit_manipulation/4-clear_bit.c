#include "main.h"
/**
 * clear_bit - function that set a bit to 0
 * @n: points to the number to change
 * @index: index to clear
 *
 * Return: 1 for success, -1 for failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}
