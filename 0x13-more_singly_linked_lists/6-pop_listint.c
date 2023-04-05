#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the head node of linked list
 * @head: pointer to the header
 *
 * Return: head node's data value
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int result;

	if (head == NULL || *head == NULL)
		return (0);
	node = (*head)->next;
	result = (*head)->n;
	free(*head);
	*head = node;
	return (result);
}
