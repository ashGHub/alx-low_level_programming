#include "search_algos.h"

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
    size_t i, jump, left = 0, right = size - 1;

    if (array == NULL)
        return (-1);

    jump = sqrt(size);
    while (left <= right)
    {
        printf("Value checked array[%lu] = [%d]\n", left, array[left]);
        if (array[left] <= value && array[left + jump] >= value)
        {
            printf("Value found between indexes [%lu] and [%lu]\n",
                    left, left + jump);
            for (i = left; i < left + jump; i++)
            {
                printf("Value checked array[%lu] = [%d]\n", i, array[i]);
                if (array[i] == value)
                    return (i);
            }
            return (-1);
        }
        left += jump;
    }
    printf("Value found between indexes [%lu] and [%lu]\n",
            left - jump, left);
    for (i = left - jump; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}
