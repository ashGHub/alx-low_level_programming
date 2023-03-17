#include <stdlib.h>

/**
 * _calloc - allocate memory for an array malloc
 *           This functions as calloc
 * @nmemb: length of the array
 * @size: size of array element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r;
	unsigned int c_size, i;

	c_size = nmemb * size;
	if (c_size <= 0)
		return (NULL);
	r = malloc(c_size);
	if (r == NULL)
		return (NULL);
	for (i = 0; i < c_size; i++)
		r[i] = 0;
	return (r);
}
