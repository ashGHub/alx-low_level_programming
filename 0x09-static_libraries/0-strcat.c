/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int d, s;

	for (d = 0; *(dest + d) != '\0'; d++)
		;

	for (s = 0; *(src + s) != '\0'; s++, d++)
		*(dest + d) = *(src + s);

	*(dest + d) = '\0';

	return (dest);
}
