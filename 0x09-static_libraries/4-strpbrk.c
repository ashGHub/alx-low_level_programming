#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * Description: Searches a string for the first occurrence
 *              of any character in a specified set of
 *              characters
 * @s: string
 * @accept: string to search for
 *
 * Return: pointer to the first occurrence of any character
 *         from the specified set, or a null pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}

	return (NULL);
}
