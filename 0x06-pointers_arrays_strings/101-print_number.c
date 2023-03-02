#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer number
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int tmp, numPart = 1;

	if (n < 0)
	{
		n *= -1;
		_putchar(45);
	}

	for (tmp = n; tmp > 9; tmp /= 10, numPart *= 10)
		;

	while (numPart > 0)
	{
		_putchar((n / numPart) + 48);
		n %= numPart;
		numPart /= 10;
	}
}
