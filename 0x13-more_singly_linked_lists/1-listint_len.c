#include "lists.h"
/**
 * listint_len - number of elements
 * @h: linked list
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t ll;

	ll = 0;

	if (h != NULL)
	{
		h = h->next;
		ll++;
	}

	return (ll);
}
