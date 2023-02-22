#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of a given number
 * @n: a number to get the last digit of off
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
		_putchar(-lastDigit + '0');
		return (-lastDigit);
	}
	else
	{
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
}
