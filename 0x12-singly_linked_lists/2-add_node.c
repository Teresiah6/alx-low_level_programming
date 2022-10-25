#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - entry add new node at beginning
 * @head: linked list head
 * @str: string in list
 * Return: linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *added;
	size_t newchar;

	added = malloc(sizeof(list_t));

	if (added == NULL)
		return (NULL);

	added->str = strdup(str);

	for (newchar = 0; str[newchar]; newchar++)
		;

	added->len = newchar;
	added->next = *head;
	*head = added;

	return (*head);

}
