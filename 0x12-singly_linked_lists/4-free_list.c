#include "lists.h"

/**
 * free_list - free the list
 * @head: head 
 * return: void
 */
void free_list(list_t *head)
{
	list_t *existing;

	while ((existing = head) != NULL)
	{
		head = head->next;
		free(existing->str);
		free(existing);
	}
	
}
