#include "lists.h"

/**
 * dlistint_len - returns number of element in linked
 * @h: linked list of listint_t
 * Return: number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
