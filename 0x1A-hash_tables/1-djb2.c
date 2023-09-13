#include "hash_tables.h"

/**
<<<<<<< HEAD
 * hash_djb2 - Implements the djb2 algorithm
 * @str: A string
 * Return: Hash representation of @str as an unsigned long int
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
=======
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
>>>>>>> 9cb779ebefd0a837c7cd4304b79a740247a46187
