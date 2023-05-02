#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the node at a certain index
 * @head: first node in list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *aa = head;

	while (aa && k < index)
	{
		aa = aa->next;
		k++;
	}

	return (aa ? aa : NULL);
}
