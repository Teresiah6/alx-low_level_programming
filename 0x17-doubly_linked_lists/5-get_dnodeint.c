#include "lists.h"
/**
 * get_dnodeint_at_index - Locate node in a dlistint_t list.
 * @head: The head
 * @index: Node to locate.
 * Return: If the node does not exist - NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
