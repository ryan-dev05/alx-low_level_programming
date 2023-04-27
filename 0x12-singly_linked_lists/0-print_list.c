#include <stdio.h>
#include "lists.h"

/**
 * print_list - outputs all elements in a linked list
 * @h: pointer to list_t to output
 *
 * Return: the num of node
 */
size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;

		k++;
	}

	return (k);
}
