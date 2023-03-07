#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: string to reset
 * @to: new string value
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
