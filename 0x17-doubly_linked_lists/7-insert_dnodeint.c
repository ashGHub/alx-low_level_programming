#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the pointer of header of a list
 * @idx: index to add the new node to
 * @n: value of the new data
 *
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *node = NULL;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	for (node = *h; node && i < idx; node = node->next)
		i++;
	if (i != idx)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	node->prev->next = new;
	new->prev = node->prev;
	new->next = node;
	node->prev = new;
	return (new);
}
