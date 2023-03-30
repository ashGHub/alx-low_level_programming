#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free linked list memory
 * @head: linked list head
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
