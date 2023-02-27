#include "main.h"

/**
 * puts_half - prints half of a string
 * if length is odd, prints (len - 1) / 2
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int len = 0;

	while (*(str + len) != '\0')
		len++;

	for (i = (len + 1) / 2 ; *(str + i) != '\0'; i++)
		_putchar(*(str + i));

	_putchar('\n');
}
