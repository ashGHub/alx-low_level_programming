#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 *
 * Return: pointer to the allocated memory 
 */
void *malloc_checked(unsigned int b)
{
	char *r;

	r = malloc(b);
	if (r == NULL)
		exit(98);
	return (r);
}
