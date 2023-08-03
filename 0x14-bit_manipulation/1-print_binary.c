#include "main.h"
/**
 * print_binary - function that gives equivalent to decimal number
 * @n: num to print in binary
 *
 */
void print_binary(unsigned long int n)
{
	int r, d = 0;
	unsigned long int las;

	for (r = 63; r >= 0; r--)
	{
		las = n >> 1;

		if (las & 1)
		{
			_putchar('1');
			d++;
		}
		else if (d)
			_putchar('0');
	}
	if (!d)
	{
		_putchar('0');
	}
}
