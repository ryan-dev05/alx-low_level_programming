#include "lists.h"
/**
 * add_dnodeint - adds a new node at beginning of a list
 * @head: points to first node
 * @n: string to be added
 * Return: the address ti the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node_nw;

	if (head == NULL)
	{
		return (NULL);
	}

	node_nw = malloc(sizeof(dlistint_t));
	if (node_nw == NULL)
	{
		return (NULL);
	}

	node_nw->n = n;
	node_nw->next = *head;
	*head = node_nw;

	return (node_nw);
}
