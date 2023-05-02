#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node to list
 * @head: points to the first node
 * @idx: index where node is added
 * @n: data to insert
 *
 * Return: pointer to new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *nw;
	listint_t *tp = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw || !head)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}

	for (k = 0; tp && k < idx; k++)
	{
		if (k == idx - 1)
		{
			nw->next = tp->next;
			tp->next = nw;
			return (nw);
		}
		else
			tp = tp->next;
	}

	return (NULL);
}
