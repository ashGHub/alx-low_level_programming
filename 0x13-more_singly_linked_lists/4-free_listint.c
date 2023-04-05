#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list allocated memory
 * @head: linked list head
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
