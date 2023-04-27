#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node
 * @head: double pointer
 * @str: the new string to add
 *
 * Return: address of the new element, NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nn_node = malloc(sizeof(list_t));

	if (!nn_node)
	{
		return (NULL);
	}
	nn_node->str = strdup(str);

	if (!nn_node->str)
	{
		free(nn_node);
		return (NULL);
	}

	nn_node->next = *head;
	*head = nn_node;

	return (nn_node);
}
