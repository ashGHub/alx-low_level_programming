#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a linked list
 * @head: linked list pointer
 * @index: index
 *
 * Return: element at a given index or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *result = NULL;
	unsigned int i;

	for (i = 0, result = head; i < index && result; i++, result = result->next)
		;
	return (result);
}
