#include "lists.h"

/**
 * dlistint_len - returns no. of elements in a linked list
 * @h: The head of the list.
 * Return: no. of elements in the dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
