#include "main.h"

/**
 * print_square - Prints square with a given size
 * @n: square size
 *
 * Return: void
 */

void print_square(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			_putchar('#');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
