#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * close_file - close file descriptor
 * @fd: The file descriptor to be closed
 *
 * Return: Nothing
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - copies from one file to another
 * @from_file: source file path
 * @to_file: desitnation file path
 *
 * Return: Nothing
 */
void copy_file(char *from_file, char *to_file)
{
	int fd_from, fd_to, nr, nw;
	char buffer[BUFFER_SIZE];

	fd_from = open(from_file, O_RDONLY);
	fd_to = open(to_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	nr = read(fd_from, buffer, BUFFER_SIZE);
	do {
		if (fd_from == -1 || nr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", from_file);
			exit(98);
		}
		nw = write(fd_to, buffer, nr);
		if (fd_to == -1 || nw == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", to_file);
			exit(99);
		}
		nr = read(fd_from, buffer, BUFFER_SIZE);
		fd_to = open(to_file, O_WRONLY | O_APPEND);
	} while (nr > 0);
	close_file(fd_from);
	close_file(fd_to);
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *from_file, *to_file;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from_file = argv[1];
	to_file = argv[2];
	copy_file(from_file, to_file);
	return (0);
}
