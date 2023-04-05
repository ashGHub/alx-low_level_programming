#include "lists.h"

/**
 * sum_listint - the sume of all the data n of linked list
 * @head: pointer to header
 *
 * Return: sum of the data value or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;

	for (node = head; node; node = node->next)
		sum += node->n;
	return (sum);
}
