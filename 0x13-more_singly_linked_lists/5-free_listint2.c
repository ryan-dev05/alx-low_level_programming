#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: points to a freed list
 */
void free_listint2(listint_t **head)
{
	listint_t *count;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		count = (*head)->next;
		free(*head);
		*head = count;
	}

	*head = NULL;
}
