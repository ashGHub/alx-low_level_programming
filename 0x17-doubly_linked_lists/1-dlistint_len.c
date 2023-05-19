#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to the list header
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *node;

	for (node = h; node; node = node->next)
		len++;
	return (len);
}
