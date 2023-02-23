#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print all natural numbers from n to 98
 * @n: starting point of the number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a < 98; a++)
		{
			printf("%d, ", a);
		}
	}
	else
	{
		for (a = n; a > 98; a--)
		{
			printf("%d, ", a);
		}
	}
	printf("%d\n", 98);
}
