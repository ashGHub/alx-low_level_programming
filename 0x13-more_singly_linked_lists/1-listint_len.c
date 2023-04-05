#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list pointer
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
