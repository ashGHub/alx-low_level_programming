#include <stdio.h>

/**
 * print_array - Prints elements of array to the given limit
 * @a: array
 * @n: number of elements limit
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf("%s", ", ");
	}
	putchar('\n');
}
