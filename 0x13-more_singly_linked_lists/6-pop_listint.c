#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: points to the first element in the list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *count;
	int a;

	if (!head || !*head)
	{
		return (0);
	}
	a = (*head)->n;
	count = (*head)->next;
	free(*head);
	*head = count;

	return (a);
}
