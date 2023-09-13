#include "hash_tables.h"

/**
<<<<<<< HEAD
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	int flag = 0;
	unsigned long int idx = 0;
	hash_node_t *ptr = NULL;

	if (!ht)
		return;
	printf("{");
	while (idx < ht->size)
	{
		ptr = ht->array[idx];
		if (ptr == NULL)
		{
			idx++;
			continue;
		}
		if (flag == 0)
		{
			printf("\'%s\': \'%s\'", ptr->key, ptr->value);
			flag++;
		}
		else
			printf(", \'%s\': \'%s\'", ptr->key, ptr->value);
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
			printf(", \'%s\': \'%s\'", ptr->key, ptr->value);
		}
		idx++;
	}
	printf("}\n");
}
=======
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
>>>>>>> 9cb779ebefd0a837c7cd4304b79a740247a46187
