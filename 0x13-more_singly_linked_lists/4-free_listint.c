#include "lists.h"
/**
 * free_listint - a function that frees
 * a listint_t list
 * @head: the head
 */
void free_listint(listint_t *head)
{
    /*ch:current header */
	listint_t *ch;

	while (head)
	{
		ch = head->next;
		free(head);
		head = ch;
	}
}
