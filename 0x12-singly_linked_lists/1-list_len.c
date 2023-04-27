#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * list_len - gives num of elements in linked list
 * @h: pointer to list_t list
 *
 *
 * Return:  num of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t run = 0;

	while (h != NULL)
	{
		run++;
		h = h->next;
	}

	return (run);
}
