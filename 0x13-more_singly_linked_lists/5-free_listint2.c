#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees allocated linked list memory
 * @head: linked list header pointer
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *next;
	listint_t *node;

	if (head == NULL)
		return;
	node = *head;
	while (node)
	{
		next = node->next;
		free(node);
		node = next;
	}
	*head = NULL;
}
