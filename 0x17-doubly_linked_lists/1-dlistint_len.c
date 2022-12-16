#include "lists.h"
/**
 * dlistint_len - count number of elements
 * @h: The head
 * Return: Number of elements
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
