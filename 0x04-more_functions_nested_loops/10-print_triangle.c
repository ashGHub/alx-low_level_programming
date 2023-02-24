#include "main.h"

/**
 * print_triangle - Prints triangle in a given size
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
			_putchar(' ');

		for (k = i; k > 0; k--)
			_putchar('#');
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
