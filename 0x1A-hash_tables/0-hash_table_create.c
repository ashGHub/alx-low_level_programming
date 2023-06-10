#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *result = NULL;
	hash_node_t **array = NULL;

	result = malloc(sizeof(hash_table_t));
	if (result == NULL)
	{
		return (NULL);
	}
	result->size = size;
	array = malloc(size * sizeof(hash_node_t *));
	if (array == NULL)
	{
		return (NULL);
	}
	result->array = array;
	return (result);
}
