#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node
 * @head: points to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tp = *head;
	dlistint_t *cur = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tp);
		return (1);
	}

	while (a < index - 1)
	{
		if (!tp || !(tp->next))
			return (-1);
		tp = tp->next;
		a++;
	}

	cur = tp->next;
	tp->next = cur->next;
	free(cur);

	return (1);
}
