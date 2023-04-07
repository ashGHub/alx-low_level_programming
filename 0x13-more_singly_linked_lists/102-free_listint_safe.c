#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - free allocated memory for linkedlist safely
 * @h: pointer to the pointer of the head
 *
 * Return: number of freed nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	int count = 0;
	listint_t *node = *h, *prv = NULL, *next;

	while (node)
	{
		if (prv != NULL && node >= prv)
			break;
		count++;
		prv = node;
		next = node->next;
		free(node);
		node = next;
	}
	*h = NULL;
	return (count);
}

