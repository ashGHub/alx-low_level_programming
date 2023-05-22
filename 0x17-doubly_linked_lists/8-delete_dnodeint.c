#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer of a pointer to the list head
 * @index: index to delete
 *
 * Return: 1 if it succeeded, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	for (node = *head; node && i < index; node = node->next)
		i++;
	if (i != index || node == NULL)
		return (-1);
	if (node->prev == NULL)
		*head = (*head)->next;
	if (node->prev != NULL)
		node->prev->next = node->next;
	if (node->next != NULL)
		node->next->prev = node->prev;
	free(node);
	return (1);
}
