#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @str: string
 *
 * Return: length of a string
 */
unsigned int _strlen(char *str)
{
	unsigned int len;

	for (len = 0; *(str  + len); len++)
		;
	return (++len);
}

/**
 * _strdup - copies a string to a new space in memory
 * @str: string to copy
 *
 * Return: pointer to the copied string in a new space
 */
char *_strdup(char *str)
{
	char *r;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	r = malloc(sizeof(char) * len);
	if (r == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		*(r + i) = *(str + i);
	return (r);
}
