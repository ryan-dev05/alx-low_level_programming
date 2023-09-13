#include "hash_tables.h"

/**
<<<<<<< HEAD
 * key_index - Gives the index of a key
 * @key: The key to find
 * @size: Size of the array of the hash table
 * Return: The index at which the key/value pair should be stored
 * in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = 0;
	unsigned long int new_key = 0;

	new_key = hash_djb2(key);
	idx = (new_key % size);
	return (idx);
}
=======
 * key_index - Get the index at which a key/value
 *      pair should be stored in array of a hash table.
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
>>>>>>> 9cb779ebefd0a837c7cd4304b79a740247a46187
