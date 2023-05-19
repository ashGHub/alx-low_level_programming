#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a d list
 * @head: pointer to the d list head
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
