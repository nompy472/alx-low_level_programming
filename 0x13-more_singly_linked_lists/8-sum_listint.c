#include "lists.h"

/**
 * sum_listint- sums data in list
 * @head: first node in list
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
