#include "main.h"
/**
 * print_binary - function that gives equivalent to decimal number
 * @n: num to print in binary
 *
 */
void print_binary(unsigned long int n)
{
	int p, k = 0;
	unsigned long int las;

	for (p = 63; p >= 0; p--)
	{
		las = n >> 1;

		if (las & 1)
		{
			_putchar('1');
			f++;
		}
		else if (k)
			_putchar('0');
	}
	if (!k)
	{
		_putchar('0');
	}
}
