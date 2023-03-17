#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min element value
 * @max: max element value
 *
 * Return: pointer to the create integer array
 */
int *array_range(int min, int max)
{
	int *r;
	int i, j, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	r = malloc(sizeof(int) * size);
	if (r == NULL)
		return (NULL);
	for (i = 0, j = min; i < size; i++, j++)
		r[i] = j;
	return (r);
}
