#include <stdlib.h>
#include "lists.h"
/**
 * free_list - gets a free linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *curr = head;

	while (curr != NULL)
	{
		list_t *next_node = curr->next;
		free(curr);
		curr = next_node;
	}
}
