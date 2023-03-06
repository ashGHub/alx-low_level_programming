#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: buffer
 * @c: character to find
 *
 * Return: buffer that start from the location of the character to find
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	if (*(s + i) == c)
		return (s + i);

	return (NULL);
}
