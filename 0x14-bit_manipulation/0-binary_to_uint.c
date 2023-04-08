#include <stddef.h>

/**
 * is_digit - checks if a char is digit or not
 * @c: character to check
 *
 * Return: 1 if true, 0 (otherwise)
 */
short is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - gets the length of a string
 * @str: string
 *
 * Return: length of a string
 */
short _strlen(const char *str)
{
	short len;

	for (len = 0; str && str[len]; len++)
		;
	return (len);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: unsigned int number, or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int idx;
	unsigned int bitPart = 1, len, result = 0;

	len = _strlen(b);
	for (idx = len - 1; idx >= 0 && b[idx]; idx--, bitPart *= 2)
	{
		if (!is_digit(b[idx]))
			return (0);
		result += (b[idx] - '0') * bitPart;
	}
	return (result);
}
