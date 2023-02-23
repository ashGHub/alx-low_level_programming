#include <stdio.h>

/**
 * main - Prints the 50th fibonacci number
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long fb;
	long prv = 0;
	long cur = 1;

	for (i = 0; i < 50; i++)
	{
		fb = prv + cur;
		prv = cur;
		cur = fb;

		printf("%ld", cur);

		if (i < 49)
			printf("%s", ", ");
	}
	putchar('\n');
	return (0);
}
