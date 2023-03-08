#include <unistd.h>

/**
 * _putchar - prints a given character to stdout
 * @c: character to print
 *
 * Return: 1 if successful, other-wise -1 error code
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
