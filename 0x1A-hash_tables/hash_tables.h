<<<<<<< HEAD
#ifndef __HASH_TABLES__H__
#define __HASH_TABLES_H__
=======
hash_tables.h
#ifndef HASH_TABLES_H
#define HASH_TABLES_H
>>>>>>> 9cb779ebefd0a837c7cd4304b79a740247a46187

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
<<<<<<< HEAD
 *
=======
>>>>>>> 9cb779ebefd0a837c7cd4304b79a740247a46187
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
<<<<<<< HEAD
     char *key;
     char *value;
     struct hash_node_s *next;
=======
	char *key;
	char *value;
	struct hash_node_s *next;
>>>>>>> 9cb779ebefd0a837c7cd4304b79a740247a46187
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
<<<<<<< HEAD
 *
=======
>>>>>>> 9cb779ebefd0a837c7cd4304b79a740247a46187
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
<<<<<<< HEAD
     unsigned long int size;
     hash_node_t **array;
=======
	unsigned long int size;
	hash_node_t **array;
>>>>>>> 9cb779ebefd0a837c7cd4304b79a740247a46187
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
<<<<<<< HEAD
#endif
=======

#endif /* HASH_TABLES_H */
>>>>>>> 9cb779ebefd0a837c7cd4304b79a740247a46187
