#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: long decimal number
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int quotient;

	if (n <= 1)
	{
		_putchar('0' + n);
		return;
	}
	quotient = n >> 1;
	print_binary(quotient);
	_putchar('0' + (n - (quotient * 2)));
}
