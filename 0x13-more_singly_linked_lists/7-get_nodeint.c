#include "lists.h"
/**
 * get_nodeint_at_index - Write a function that
 * returns the nth node of a listint_t linked list
 * @head: the header
 * @index: the index
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *ch = head;

	while (ch && x < index)
	{
		ch = ch->next;
		x++;
	}

	return (ch ? ch : NULL);
}
