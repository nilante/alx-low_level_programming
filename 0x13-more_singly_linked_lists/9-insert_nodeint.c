#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position
 * @head: the header
 * @idx: is the index of the list where
 * the new node should be added. Index starts at 0
 * @n: the node
 * Return: the address of the new node,
 * or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *nv;
	listint_t *ch = *head;

	nv = malloc(sizeof(listint_t));
	if (!nv || !head)
		return (NULL);

	nv->n = n;
	nv->next = NULL;

	if (idx == 0)
	{
		nv->next = *head;
		*head = nv;
		return (nv);
	}

	for (x = 0; ch && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new->next = ch->next;
			ch->next = new;
			return (new);
		}
		else
			ch = ch->next;
	}

	return (NULL);
}

