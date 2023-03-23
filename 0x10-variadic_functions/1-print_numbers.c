#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers with given separator
 * @separator: number separator
 * @n: size of the arguments
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1)
			printf("%s", separator == NULL ? "" : separator);
	}
	printf("\n");
	va_end(ap);
}
