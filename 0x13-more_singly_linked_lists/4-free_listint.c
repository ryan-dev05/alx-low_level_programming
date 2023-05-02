#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *f;

	while (head)
	{
	       f = head->next;
	       free(head);
	       head = f;
	}
}
