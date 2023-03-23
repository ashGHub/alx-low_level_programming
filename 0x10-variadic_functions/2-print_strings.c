#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings with given separator
 * @separator: string separator
 * @n: size of arguments
 *
 * Return: Nothing
 */
void print_strings(const char *separator,  const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *element;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		element = va_arg(ap, char *);
		printf("%s", element == NULL ? "(nil)" : element);
		if (i != n - 1)
			printf("%s", separator == NULL ? "" : separator);
	}
	printf("\n");
	va_end(ap);
}
