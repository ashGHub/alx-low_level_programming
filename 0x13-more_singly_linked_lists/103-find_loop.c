#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - finds the node where the loop starts
 * @head: pointer to the head
 *
 * Return: number of nodes in the list
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (head == NULL)
		return (NULL);
	do {
		slow = slow->next;
		fast = fast->next->next;
	} while (fast != NULL && fast->next != NULL && slow != fast);

	if (fast == NULL || fast->next == NULL)
		return (NULL);
	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}
