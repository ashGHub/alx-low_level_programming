#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: size of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	if (argc <= 2)
		printf("%s\n", "Error");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
