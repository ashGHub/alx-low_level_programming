#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - print character
 * @ap: va_list
 *
 * Return: Nothing
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - print integer
 * @ap: va_list
 *
 * Return: Nothing
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - print float
 * @ap: va_list
 *
 * Return: Nothing
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - print string
 * @ap: va_list
 *
 * Return: Nothing
 */
void print_string(va_list ap)
{
	char *s  = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("%s", "(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: format list types
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	char *separator = "", *comma_space = ", ";
	va_list ap;

	Format_t frmts[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_start(ap, format);
	while (format && *(format + i))
	{
		j = 0;
		while (frmts[j].f != NULL)
		{
			if (*(frmts[j].f) == *(format + i))
			{
				printf("%s", separator);
				frmts[j].print(ap);
				separator = comma_space;
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
