#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a double linked list
 * @h: pointer to the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *node;

	for (node = h; node; node = node->next)
	{
		printf("%d\n", node->n);
		nodes += 1;
	}
	return (nodes);
}
