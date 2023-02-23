#include "main.h"

/**
 * _isupper - check if a charcter is uppercse or not
 * @c: character to check
 *
 * Return: 1 if is uppercase, if not 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
