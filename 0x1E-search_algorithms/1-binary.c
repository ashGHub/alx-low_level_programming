#include "search_algos.h"

/**
 * binary_search - searches a value the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value if found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, half, left = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		half =  left + (right - left) / 2;
		if (array[half] == value)
		{
			return (i);
		}
		else if (array[half] < value)
		{
			left = half + 1;
		}
		else
		{
			right = half - 1;
		}
	}

	return (-1);
}
