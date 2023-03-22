#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: size of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int n1, n2;
	char *op;
	int (*op_handler)(int, int);

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op = argv[2];
	op_handler = get_op_func(op);
	if (op_handler == NULL || op[1] != '\0')
	{
		printf("%s\n", "Error");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && n2 == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	printf("%d\n", op_handler(n1, n2));
	return (0);
}
