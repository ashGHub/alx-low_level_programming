#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches a value using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value if found else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump = sqrt(size), start = 0;

	if (!array)
		return (-1);

	while (start < size && array[start] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		start += jump;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start - jump, start);
	for (i = start - jump; i < size && i <= start; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
