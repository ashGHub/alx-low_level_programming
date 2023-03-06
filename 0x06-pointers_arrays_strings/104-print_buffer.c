#include <stdio.h>

/**
 * print_buffer - prints contents of a string of a given buffer bytes
 * @b: string
 * @size: buffer size
 *
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%.8x:", i);

		for (j = i; j < i + 10; j++)
		{
			if (j % 2 == 0)
				printf(" ");

			if (j < size)
				printf("%.2x", *(b + j));
			else
				printf("  ");
		}

		putchar(' ');

		for (j = i; j < i + 10 && j < size; j++)
		{
			char c = *(b + j);

			/* printable characters */
			if (c >= 32 && c <= 126)
				putchar(c);
			else
				putchar('.');
		}

		putchar('\n');
	}
}
