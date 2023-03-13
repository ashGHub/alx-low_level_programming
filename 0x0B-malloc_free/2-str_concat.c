#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @str: string
 *
 * Return: length of a string
 */
unsigned int _strlen(char *str)
{
	unsigned int len;

	for (len = 0; *(str  + len); len++)
		;
	return (++len);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *r;
	unsigned int i, j, s1_len, s2_len;

	s1_len = s1 == NULL ? 0 : _strlen(s1);
	s2_len = s2 == NULL ? 0 : _strlen(s2);
	r = malloc(sizeof(char) * (s1_len + s2_len - 1));
	if (r == NULL)
		return (NULL);
	for (i = 0; s1 != NULL && *(s1 + i); i++)
		*(r + i) = *(s1 + i);
	for (j = 0; s2 != NULL && *(s2 + j); j++, i++)
		*(r + i) = *(s2 + j);
	return (r);
}
