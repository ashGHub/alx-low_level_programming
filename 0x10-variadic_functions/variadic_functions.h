#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

/**
 * struct frmt - holdes format print handler
 * @f: format
 * @print: print handler
 *
 */
struct frmt
{
	char *f;
	void (*print)(va_list ap);
};

typedef struct frmt Format_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
