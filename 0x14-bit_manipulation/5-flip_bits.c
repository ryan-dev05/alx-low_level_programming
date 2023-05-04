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
	int a, tee = 0;
	unsigned long int kur;
	unsigned long int x = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		kur = x >> a;
		if (kur & 1)
			tee++;
	}

	return (tee);
}
