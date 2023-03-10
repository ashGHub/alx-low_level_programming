/**
 * _strlen - Returns the length of a string
 * @s: string
 *
 * Return: void
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
