#include "hash_tables.h"

/**
<<<<<<< HEAD
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *ptr;
	hash_node_t *prev;

	if (!ht)
		return;
	for (idx = 0; idx < ht->size; idx++)
	{
		ptr = ht->array[idx];
		prev = ht->array[idx];
		if (ptr == NULL)
			continue;
		while (ptr != NULL)
		{
			free(ptr->key);
			free(ptr->value);
			ptr = ptr->next;
			free(prev);
			prev = ptr;
		}
	}
	free(ht->array);
	free(ht);
}
=======
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
>>>>>>> 9cb779ebefd0a837c7cd4304b79a740247a46187
