#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - string len
 * @str: string
 *
 * Return: len of the string
 */
int _strlen(const char *str)
{
	int len;

	for (len = 0; *(str + len); len++)
		;
	return (len);
}

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: head to the node
 * @str: new value to add in a new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	for (node = *head; node && node->next; node = node->next)
		;
	if (node == NULL)
		*head = new;
	else
		node->next = new;
	return (new);
}
