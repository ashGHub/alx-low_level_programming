#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *                  of a square matrix of integers
 * @a: square matrix
 * @size: square size
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	/**
	 * There are two ways to calculate the address of 2D array
	 * 1. Row Major order (helps to print the rows)
	 * 2. Column Major order (helps to print the columns
	 */

	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		sum1 += *(a + (i * size + i));
		sum2 += *(a + (i * size + j));
	}
	printf("%d, %d\n", sum1, sum2);
}
