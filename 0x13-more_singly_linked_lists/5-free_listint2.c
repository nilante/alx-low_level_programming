#include "lists.h"
/**
 * free_listint2 - a function that frees
 * a listint_t list
 * @head: the header
 */
void free_listint2(listint_t **head)
{
	listint_t *ch;

	if (head == NULL)
		return;

	while (*head)
	{
		ch = (*head)->next;
		free(*head);
		*head = ch;
	}

	*head = NULL;
}
