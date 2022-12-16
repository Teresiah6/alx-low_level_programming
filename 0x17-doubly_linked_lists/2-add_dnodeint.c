#include "lists.h"
/**
 * dlistint_len - Count no. of elements linked dlistint_t list
 * @h: The head
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
