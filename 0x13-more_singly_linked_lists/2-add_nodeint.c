#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginnig of a linkedlist
 * @head: pointer to the head of the linked list
 * @n: new data value to add to the linked list
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = tmp;
	*head = new;
	return (new);
}
