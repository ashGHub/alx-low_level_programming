/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: bytes to take
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int d, s;

	for (d = 0; *(dest + d) != '\0'; d++)
		;

	for (s = 0; s < n && *(src + s) != '\0'; s++, d++)
		*(dest + d) = *(src + s);

	*(dest + d) = '\0';

	return (dest);
}
