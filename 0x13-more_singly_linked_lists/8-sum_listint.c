#include "lists.h"
/**
 * sum_listint - a function that returns the
 * sum of all the data (n) of a listint_t linked list
 * @head: the header
 * Return: if the list is empty
 * return 0resulting sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *ch = head;

	while (ch)
	{
	s += ch->n;
	ch = ch->next;
	}

	return (s);
}
