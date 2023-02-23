#include "main.h"

/**
 * times_table - prints the 9 times mutliplication table
 *
 * Return: void
 */
void times_table(void)
{
	int n1, n2, m;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			m = n1 * n2;

			if (n2 > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (m < 10)
					_putchar(' ');
			}


			if (m < 10)
			{
				_putchar((m % 10) + '0');
			}
			else
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
