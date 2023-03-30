#include "lists.h"

/**
 * list_len - gets the number of elements in a linked list list_t
 * @h: pointer to linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int nodes = 0;
	const list_t *node;

	for (node = h; node; node = node->next)
		nodes++;
	return (nodes);
}
