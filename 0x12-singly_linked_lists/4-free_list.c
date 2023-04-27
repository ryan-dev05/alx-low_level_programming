#include <stdlib.h>
#include "lists.h"
/**
 * free_list - gets a free linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *curr;

	while (head)
	{
		curr = curr->next;
		free(head->str);
		free(head);
		head = curr;
	}
}
