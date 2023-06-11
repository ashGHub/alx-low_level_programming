#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key you are looking for
 *
 * Return: value associated with given key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (key == NULL || ht == NULL || ht->array == NULL)
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node && strcmp(node->key, key) != 0)
	{
		node = node->next;
	}
	if (node == NULL)
	{
		return (NULL);
	}
	return (node->value);
}
