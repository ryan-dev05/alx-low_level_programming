#include "lists.h"

/**
 * print_listint - prints all elements of a function
 * @h: type listint_t to point
 *
 * Return: num of node
 */
size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		printf("%d/n", h->n);
		k++;
		h = h->next;
	}

	return (k);
}
