#include <stdio.h>

/**
 * matches - checks if subsequent elements matchs
 * @haystack: string
 * @needle: substring
 *
 * Return: 1 if it matches else 0
 */
short matches(char *haystack, char *needle)
{
	unsigned int i;

	for (i = 0; *(needle + i) && *(haystack + i); i++)
	{
		if (*(needle + i) != *(haystack + i))
			return (0);
	}

	/* haystack size is less than needle*/
	if (*(needle + i))
		return (0);

	return (1);
}

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	for (i = 0; *(haystack + i); i++)
	{
		if (matches(haystack + i, needle))
			return (haystack + i);
	}

	return (0);
}
