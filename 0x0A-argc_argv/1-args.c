#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: size of arguments
 * @argv: array of arguments
 *
 * Return: nothing
 */
int main(int argc, char **argv __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
