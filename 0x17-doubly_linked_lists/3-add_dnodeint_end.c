#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds new node to the end of a dlist
 * @head: pointer to the list header
 * @n: new node value
 *
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *node;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	for (node = *head; node && node->next; node = node->next)
		;
	new->n = n;
	new->next = NULL;
	if (node == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	new->prev = node;
	node->next = new;
	return (new);
}
