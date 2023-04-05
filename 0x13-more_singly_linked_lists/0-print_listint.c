#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
