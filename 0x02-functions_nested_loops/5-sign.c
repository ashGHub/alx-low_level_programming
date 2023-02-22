#include "main.h"

/**
 * print_sign - Checks if a given number is +ve, -ve, or zero
 * @n: number to check
 *
 * Return: 1 if +ve, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
