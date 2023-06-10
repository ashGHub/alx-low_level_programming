#include "hash_tables.h"

/**
 * hash_djb2 - hash a key using djb2 algorithm
 * @str: key to hash
 *
 * Return: hash index for the key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
