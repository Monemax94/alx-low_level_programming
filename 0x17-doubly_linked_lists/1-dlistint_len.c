#include "lists.h"

/**
 * dlistint_len - is a function that returns the number of
 * nodes in a doubly linked list
 * @h: is a pointer to the list
 *
 * Return: the total number of items or nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
