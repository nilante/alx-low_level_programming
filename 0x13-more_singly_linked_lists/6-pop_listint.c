#include "lists.h"
/**
 * pop_listint - a function that deletes the head
 * node of a listint_t linked list, and
 * returns the head node’s data (n)
 * @head: the header
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *ch;
	int node;

	if (!head || !*head)
		return (0);

	node = (*head)->n;
	ch = (*head)->next;
	free(*head);
	*head = ch;

	return (node);
}
