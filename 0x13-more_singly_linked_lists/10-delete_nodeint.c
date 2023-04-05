#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete the node at given index
 * @head: pointer to the head
 * @index: index to delete
 *
 * Return: 1 if it succeeded, -1 (otherwise)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prv_node = NULL, *node = NULL;
	unsigned int i;

	for (i = 0, node = *head; i < index && node; i++)
	{
		prv_node = node;
		node = node->next;
	}
	if (i != index || node == NULL)
		return (-1);
	if (prv_node == NULL)
		*head = node->next;
	else
		prv_node->next = node->next;
	free(node);
	return (1);
}
