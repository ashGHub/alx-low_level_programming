#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add new node as new head of a list
 * @head: pointer to the header
 * @n: new node value
 *
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *node;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	node = *head;
	new->n = n;
	new->prev = NULL;
	*head = new;
	new->next = node;
	if (node != NULL)
		node->prev = new;
	return (new);
}
