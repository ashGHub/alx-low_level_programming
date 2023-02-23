#include "main.h"

/**
 * print_line - Prints line with a given size
 * @n: line size
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
