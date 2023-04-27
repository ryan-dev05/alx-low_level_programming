#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw;
	list_t *emp = *head;
	unsigned int leng = 0;

	while (str[leng])
	{
		leng++;

		nw = malloc(sizeof(list_t));
	}

		if (!nw)
		{
			return (NULL);
		}

		nw->str = strdup(str);
		nw->len = leng;
		nw->next = NULL;

		if (*head == NULL)
		{
			*head = nw;
			return (nw);
		}

		while (emp->next)
		{
			emp = emp->next;
			emp->next = nw;
		}

		return (nw);
}
