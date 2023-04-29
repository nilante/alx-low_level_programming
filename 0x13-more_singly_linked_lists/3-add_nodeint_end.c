#include "lists.h"
/**
 * add_nodeint_end -  a function that adds a
 * new node at the end of a listint_t list
 * @head: the header
 * @n: the node
 * Return: the address of the new element,
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *ch = *head;
/*ch:current header*/
	node = malloc(sizeof(listint_t));
	if (!n)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (ch->next)
		ch = ch->next;

ch->next = node;

	return (node);
}
