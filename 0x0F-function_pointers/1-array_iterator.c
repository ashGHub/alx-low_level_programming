#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 *                  on each element of an array
 * @array: array to print
 * @size: array size
 * @action: handler
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
