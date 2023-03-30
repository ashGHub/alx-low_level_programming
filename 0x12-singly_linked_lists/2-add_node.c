#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
 * add_node - adds a new node at the beginning of a linked list
 * @head: node head
 * @str: new string value to the new node
 *
 * Return: the new address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = temp;
	*head = new;
	return (new);
}
