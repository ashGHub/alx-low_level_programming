#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	short first_print = 1;
	unsigned long int idx = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node)
		{
			if (!first_print)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			first_print = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
