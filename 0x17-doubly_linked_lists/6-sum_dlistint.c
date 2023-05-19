#include "lists.h"

/**
 * sum_dlistint - returns the sume of all the data
 * @head: pointer to the list header
 *
 * Return: sum of all node values
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node;

	for (node = head; node; node = node->next)
		sum += node->n;
	return (sum);
}
