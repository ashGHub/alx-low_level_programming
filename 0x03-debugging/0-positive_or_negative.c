#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: -ve, +ve or 0 rand
 * Return: void
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
}
