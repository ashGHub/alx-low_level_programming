#include <stdio.h>

/**
 * main - Prints the 98th fibonacci number
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long double fb;
	long double prv = 0;
	long double cur = 1;

	for (i = 0; i < 98; i++)
	{
		fb = prv + cur;
		prv = cur;
		cur = fb;

		printf("%.0Lf", cur);

		if (i < 97)
			printf("%s", ", ");
	}
	putchar('\n');
	return (0);
}
