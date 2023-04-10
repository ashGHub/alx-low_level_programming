#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * error - return zero for file related error
 * @fd: file discriptor close
 * @buffer: buffer to clear
 *
 * Return: Always 0
 */
ssize_t error(int fd, char *buffer)
{
	close(fd);
	free(buffer);
	return (0);
}

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters: number of letter it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t num, wr;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	num = read(fd, buffer, letters);
	if (num == -1)
		return (error(fd, buffer));
	buffer[num] = '\0';
	wr = write(STDOUT_FILENO, buffer, num);
	if (wr != num)
		return (error(fd, buffer));
	close(fd);
	free(buffer);
	return (num);
}
