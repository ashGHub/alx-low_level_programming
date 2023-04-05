#include "lists.h"

/**
 * reverse_listint - reverses a given linked list
 * @head: pointer to the head
 *
 * Return: pointer to the new first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv_node = NULL, *next_node = NULL;

	if (head == NULL)
		return (NULL);
	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prv_node;
		prv_node = *head;
		*head = next_node;
	}
	*head = prv_node;
	return (*head);
}
