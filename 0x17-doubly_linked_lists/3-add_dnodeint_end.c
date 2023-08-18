#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nw;
	dlistint_t *tp = *head;

	nw = malloc(sizeof(dlistint_t));
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
