#include <stdio.h>

/**
 * first - prints a verse from a poem to show human resilience
 *
 * Return: Nothing
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

void first_constructor(void) __attribute__((constructor));

/**
 * first_constructor - executes code before the main function
 *
 * Return: Nothing
 */
void first_constructor(void)
{
	first();
}
