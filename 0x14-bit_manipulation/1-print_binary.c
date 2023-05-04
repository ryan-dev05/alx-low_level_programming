#include "main.h"
/**
 * print_binary - function that gives equivalent to decimal number
 * @n: num to print in binary
 *
 */
void print_binary(unsigned long int n)
{
	int k, f = 0;
	unsigned long int last;

	for (k = 63; k >= 0; k--)
	{
		last = n >> 1;

		if (last & 1)
		{
			_putchar('1');
			f++;
		}
		else if (f)
			_putchar('0');
	}
	if (!f)
	{
		_putchar('0');
	}
}
