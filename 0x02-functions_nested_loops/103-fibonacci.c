#include <stdio.h>

/**
 * main - Prints the 50th fibonacci number
 *
 * Return: Always 0
 */
int main(void)
{
	long sum = 0;
	long fb = 0;
	long prv = 0;
	long cur = 1;

	while (fb < 4000000)
	{
		fb = prv + cur;
		prv = cur;
		cur = fb;

		if (fb % 2 == 0)
			sum += fb;
	}
	printf("%ld\n", sum);
	return (0);
}
