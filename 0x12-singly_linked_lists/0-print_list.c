#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - entry point
 * @h: linked list
 * Return:number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t lk;

	lk = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d]s\n", 0, "(nil)");
		}
		else
			printf("[%d]%s\n", h->len, h->str);
		h = h->next;
		lk++;

	}
	return (lk);
}
