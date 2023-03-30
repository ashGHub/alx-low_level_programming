#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t linked list
 * @h: pointer to the head linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int nodes = 0;
	const list_t *node;

	for (node = h; node != NULL; node = node->next)
	{
		nodes++;
		if (node->str == NULL)
			printf("%s\n", "[0] (nil)");
		else
			printf("[%u] %s\n", node->len, node->str);
	}
	return (nodes);
}
