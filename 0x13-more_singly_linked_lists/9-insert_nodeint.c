#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert new node
 * @head: head of ll
 * @idx: index of list where + new node
 * @n: info to insert
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nw;

	listint_t *temp = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw || !head)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			nw->next = temp->next;
			temp->next = nw;
			return (nw);
		}
		else
			temp = temp->next;
	}
	return (NULL);

}
