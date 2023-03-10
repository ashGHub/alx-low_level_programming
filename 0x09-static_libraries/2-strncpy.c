/**
 * _strncpy - copies a strings
 * @dest: destination string
 * @src: source string
 * @n: bytes to take
 *
 * Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s;

	for (s = 0; s < n && *(src + s) != '\0'; s++)
		*(dest + s) = *(src + s);

	/* if the above loop ended with null bytes and not */
	/* n limit, we set null bytes to the rest */
	for ( ; s < n; s++)
		*(dest + s) = '\0';

	return (dest);
}
