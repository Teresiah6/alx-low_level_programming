#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add node at end of linkedlist
 * @str: string
 * @head: head
 * Return: address of new or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw;
	list_t *temp;
	size_t newchar;



	nw = malloc(sizeof(list_t));

	if (nw == NULL)
		return (NULL);

	nw->str = strdup(str);

	for (newchar = 0; str[newchar]; newchar++)
		;

	nw->len = newchar;
	nw->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = nw;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = nw;
	}
	return (*head);
}
