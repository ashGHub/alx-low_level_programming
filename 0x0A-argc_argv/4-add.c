#include <stdio.h>
#include <stdlib.h>


/**
 * _is_int - check if given string is integer
 * @s: string to check
 *
 * Return: 1 if is int else 0
 */
short _is_int(char *s)
{
	char c;
	int i;

	for (i = 0; *(s + i); i++)
	{
		c = *(s + i);
		if (c < '0' || c > '9')
			return (0);
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: size of argumetns
 * @argv: array of arguments
 *
 * Return: 1 if successful, other-wise 0
 */
int main(int argc, char **argv)
{
	int sum = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (_is_int(argv[i]) == 0)
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
