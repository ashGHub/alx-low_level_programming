#include "main.h"

/**
 * main - Starting point of the program
 *
 * Return: 0 if successul, other-wise non-zero exit code
 *
 */
int main(void)
{
	char prt[] = "_putchar";
	int i = 0;

	while (prt[i] != '\0')
	{
		_putchar(prt[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
