#include "main.h"

/**
 * rev_string - reverse input string
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, tmp;
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	for (i = 0, j = len - 1; i < len / 2; i++, j--)
	{
		tmp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = tmp;
	}
}
