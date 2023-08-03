#include "main.h"
/**
 * flip_bits - function that counts the number of bit changed
 * @n: number one
 * @m: number two
 *
 * Return: number of bit change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, t = 0;
	unsigned long int curr;
	unsigned long int i = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		curr = i >> a;
		if (curr & 1)
			t++;
	}

	return (t);
}
