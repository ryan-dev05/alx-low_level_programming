#include "lists.h"

/**
 * free_dlistint - frees linked list
 * @head: listint_t list to be freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *f;

	while (head)
	{
		f = head->next;
		free(head);
		head = f;
	}
}
