#include "lists.h"

/**
 * sum_listint - function that  calculates the sum of all the data
 * @head: first node in the list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int a = 0;
	listint_t *count = head;

	while (count)
	{
		a += count->n;
		count = count->next;
	}

	return (a);
}
