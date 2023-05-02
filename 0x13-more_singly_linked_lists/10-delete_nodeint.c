#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node
 * @head: points to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tp = *head;
	listint_t *cur = NULL;
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
