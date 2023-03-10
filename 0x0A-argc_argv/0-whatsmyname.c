#include <stdio.h>

/**
 * main - prints the program name followed by a new line
 * @argc: size of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc __attribute__ ((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
