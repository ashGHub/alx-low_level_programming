#include <fcntl.h>
#include <unistd.h>

/**
 * _strlen - get the length of a given string
 * @str: string to check
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	size_t len;

	for (len = 0; str && str[len]; len++)
		;
	return (len);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name to create
 * @text_content: content to write
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	len = _strlen(text_content);
	wr = write(fd, text_content, len);
	if (wr == -1 || wr != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
