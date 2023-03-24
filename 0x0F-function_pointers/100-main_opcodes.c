#include <stdio.h>
#include <stdlib.h>

/**
 * error - prints error and exit the from the application
 * @code: error code integer
 *
 * Return: Nothing
 */
void error(int code)
{
	printf("%s\n", "Error");
	exit(code);
}

/**
 * main - prints the opcodes of its own main function for a given byte size
 *
 * Description: prints given bytes of the code
 *              if argument size is different from 2, exits with error code 1
 *              if given byte is negative, exits with error code 2
 *
 * @argc: size of the arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int byte, bytes;
	char *sp = "", *space = " ";
	int (*code)(int, char **) = main;

	if (argc != 2)
		error(1);
	bytes = atoi(argv[1]);
	if (bytes < 0)
		error(2);
	for (byte = 0; byte < bytes; byte++, code++, sp = space)
		printf("%s%.2x", sp, *(unsigned char *)code);
	printf("\n");
	return (0);
}
