#include "lists.h"
/**
 * pop_listint - delete the head of node
 * @head: linked list
 * Return: head of node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
