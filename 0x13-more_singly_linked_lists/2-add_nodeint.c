#include "lists.h"
/**
 * add_nodeint - adds a new node at beginning of a list
 * @head: points to first node
 * @n: string to be added
 * Return: the address ti the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_nw;

	if (head == NULL)
	{
		return (NULL);
	}

	node_nw = malloc(sizeof(listint_t));
	if (node_nw == NULL)
	{
		return (NULL);
	}

	node_nw->n = n;
	node_nw->next = *head;
	*head = node_nw;

	return (node_nw);
}
