#include <stdio.h>

/**
 * _atoi - parses a string to an integer
 * @s: string to parse
 *
 * Return: parsed integer
 */
int _atoi(char *s)
{
	int i;
	short sign = 1;
	unsigned int num = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		char c = *(s + i);

		if (c == '-')
		{
			sign *= -1;
		}
		else if (c >= '0' && c <= '9')
		{
			num = (num * 10) + (c - '0');
		}
		else if (num > 0)
		{
			break;
		}
	}

	return (num * sign);
}
