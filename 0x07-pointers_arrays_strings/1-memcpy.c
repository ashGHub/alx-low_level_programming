/**
 * _memcpy - copies given bytes of a buffer to destination
 * @dest: destination buffer
 * @src: source buffer
 * @n: bytes to copy
 *
 * Return: copied buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
