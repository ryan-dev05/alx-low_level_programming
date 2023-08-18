#include "lists.h"

/**
 * sum_dlistint - function that  calculates the sum of all the data
 * @head: first node in the list
 *
 * Return: resulting sum
 */
int sum_dlistint(dlistint_t *head)
{
	int a = 0;
	dlistint_t *count = head;

	while (count)
	{
		a += count->n;
		count = count->next;
	}

	return (a);
}
