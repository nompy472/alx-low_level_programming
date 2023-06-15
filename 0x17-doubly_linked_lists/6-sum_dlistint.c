#include "lists.h"

/**
 * sum_dlistint - sum of all the data of a list
 * @head:pointer to the start node of the list
 * Return:sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head->prev)
		head = head->prev;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
