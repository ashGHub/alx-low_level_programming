#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 *                initializes it with a specific char
 * @size: size of the new array
 * @c: default character
 *
 * Return: pointer to the new array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *r;

	if (size == 0)
	{
		return (NULL);
	}
	r = malloc(sizeof(char) * size);
	if (r == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		*(r + i) = c;
	return (r);
}
