#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to a pointer of linked list head
 * @n: new data value to add a node
 *
 * Return: address of the new element, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *node = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	for (node = *head; node && node->next; node = node->next)
		;
	if (node == NULL)
		*head = new;
	else
		node->next = new;
	return (new);
}
