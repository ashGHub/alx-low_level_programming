#include <stdlib.h>

/**
 * _strlen - get the length of a given string
 * @s: string to check
 *
 * Return: length of a string without null terminator
 */
unsigned int _strlen(char *s)
{
	unsigned int len;

	if (s == NULL)
		return (0);
	for (len = 0; s[len]; len++)
		;
	return (len);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: second string's byte to take
 *
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r;
	unsigned int i, idx = 0, s1_len, s2_len;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	s2_len = n >= s2_len ? s2_len : n;
	/* here 1 is for null terminator */
	r = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (r == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++, idx++)
		r[idx] = s1[i];
	for (i = 0; i < s2_len; i++, idx++)
		r[idx] = s2[i];
	r[idx] = '\0';
	return (r);
}
