#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	unsigned long int idx = 0;
	hash_table_t *ht;
	char *key = "betty", *key2 = "hetairas", *key3 = "mentioner";
	char *value = "cool", *value2 = "cool2";

	ht = hash_table_create(1024);
	hash_table_set(ht, key, value);
	idx = key_index((const unsigned char *)key, ht->size);
	hash_table_set(ht, key, value2);
	hash_table_set(ht, key2, value);
	hash_table_set(ht, key3, value);
	printf("Size: %lu\n", ht->size);
	printf("Data: %ld: %s\n", ht->size, ht->array[idx]->value);
	return (EXIT_SUCCESS);
}
