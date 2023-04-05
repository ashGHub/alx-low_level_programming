#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the header
 * @idx: index
 * @n: new data value
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, *prv_node = NULL, *node = NULL;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0, node = *head; i < idx && node; i++)
	{
		prv_node = node;
		node = node->next;
	}
	if (i != idx)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (prv_node == NULL)
	{
		*head = new;
		new->next = node;
		return (new);
	}
	prv_node->next = new;
	new->next = node;
	return (new);
}
