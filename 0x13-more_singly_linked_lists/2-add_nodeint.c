#include "lists.h"
/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a listint_t list
 * @head: the head
 * @n: numbers of node
 * Return: the address of the new element, 
 * or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	h = malloc(sizeof(listint_t));
	if (!h)
		return (NULL);

     h->n = n;
	 h->next = *head;
	*head = h;

	return (h);
}
