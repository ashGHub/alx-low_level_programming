#include <stdio.h>

/**
 * _strcpy - copies a string to destination pointer
 * @dest: destination string pointer
 * @src: string source
 *
 * Return: copy of a string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i]; /* copy terminationg null byte */
	return (dest);
}
