#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at the given index
 * @head: pointer to the head
 * @index: index of node to get
 *
 * Return: node at a given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;

	for (node = head; node; node = node->next)
	{
		if (i == index)
			return (node);
		i++;
	}
	return (NULL);
}
