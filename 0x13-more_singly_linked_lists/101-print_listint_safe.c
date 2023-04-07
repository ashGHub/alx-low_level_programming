#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_circular - checks if a node circling back
 * @head: head of the number list
 * @current: current node to check
 * @len: total nodes traversed
 *
 * Return: 1 if exists, 0 (otherwise)
 */
short is_circular(const listint_t *head, const listint_t *current, int len)
{
	int idx = 0;
	const listint_t *node;

	for (node = head; idx < len && node; node = node->next, idx++)
	{
		if (current == node)
			return (1);
	}
	return (0);
}

/**
 * print_listint_safe - prints linked list elements
 * @head: pointer to the head
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int len = 0;
	const listint_t *node;

	for (node = head; node; node = node->next, len++)
	{
		if (is_circular(head, node, len))
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
				return (len);
		}
		printf("[%p] %d\n", (void *)node, node->n);
	}
	return (len);
}

