include "main.h"
/**
 * flip_bits - function that counts the number of bit changed
 * @n: number one
 * @m: number two
 *
 * Return: number of bit change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int r, tt = 0;
	unsigned long int cur;
	unsigned long int g = n ^ m;

	for (r = 63; r >= 0; r--)
	{
		cur = g >> r;
		if (cur & 1)
			tt++;
	}

	return (tt);
}
