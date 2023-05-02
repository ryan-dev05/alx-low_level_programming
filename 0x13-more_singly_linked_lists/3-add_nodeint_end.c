#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tp = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw)
	{
		return (NULL);
	}

	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}

	while (tp->next)
		tp = tp->next;

	tp->next = nw;

	return (nw);
}

