#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100
 *
 * Description: For multiple of three prints Fizz, and for five prints Buzz
 * For number both multiple of three and five prints FizzBuzz
 * else it prints the number
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s", "FizzBuzz");
		else if (i % 3 == 0)
			printf("%s", "Fizz");
		else if (i % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", i);

		if (i < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
