#include "main.h"

/**
 * print_times_table - prints the 9 times mutliplication table
 * @n: size of the table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int n1, n2, m;

	for (n1 = 0; n1 <= n && n >= 0 && n <= 15; n1++)
	{
		_putchar('0');
		for (n2 = 1; n2 <= n; n2++)
		{
			m = n1 * n2;

			_putchar(',');
			_putchar(' ');

			if (m < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((m % 10) + '0');
			}
			else if (m >= 10 && m < 100)
			{
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else
			{
				_putchar((m / 100) + '0');
				_putchar((m / 10 % 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
