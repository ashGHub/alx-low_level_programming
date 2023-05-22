#include "main.h"

/**
 * _abs - returns the absolute value of a given number
 * @n: a number to find the absolute value of
 *
 * Return: absolute value of a number
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
