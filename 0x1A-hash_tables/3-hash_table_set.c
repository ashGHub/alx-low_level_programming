#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - add an element to the hash table
 * @ht: pointer to a hash table
 * @key: key to set
 * @value: value associated with a key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *k, *v;
	unsigned long int idx = 0;
	hash_node_t *node = NULL, *temp = NULL;

	if (ht == NULL || value == NULL || key == NULL || *key == '\0')
		return (0);
	v = malloc(strlen(value) + 1);
	strcpy(v, value);
	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];
	if (node != NULL && strcmp(node->key, key) == 0)
	{
		free(node->value);
		node->value = v;
		return (1);
	}
	k = malloc(strlen(key) + 1);
	if (k == NULL || v == NULL)
		return (0);
	strcpy(k, key);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = k;
	node->value = v;
	if (ht->array[idx] == NULL)
	{
		node->next = NULL;
		ht->array[idx] = node;
	}
	else
	{
		temp = ht->array[idx];
		node->next = temp;
		ht->array[idx] = node;
	}
	return (1);
}
