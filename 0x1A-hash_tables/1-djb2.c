#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hush.
 *
 * Return: The calculated hush.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hush;
	int k;

	hush = 5381;
	while ((k = *str++))
		hush = ((hush << 5) + hush) + k; /* hush * 33 + k */

	return (hush);
}