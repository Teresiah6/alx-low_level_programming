#include "lists.h"
/**
 * list_len -entry point
 * @h: linked list
 * Return: number of element in linked list
 */
size_t list_len(const list_t *h)
{
	size_t ll;

	ll = 0;

	while (h != NULL)
	{
		h = h->next;
		ll++;
	}

	return (ll);
}
