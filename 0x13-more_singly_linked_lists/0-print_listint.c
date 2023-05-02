#include "lists.h"

/**
 * print_listint - prints all elements of a function
 * @h: type listint_t to point
 *
 * Return:the number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		k++;
	}

	return (k);
}
