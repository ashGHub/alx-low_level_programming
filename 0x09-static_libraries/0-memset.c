/**
 * _memset - fills the buffer with a given constant for a given byte size
 * @s: buffer
 * @b: constant value
 * @n: buffer size
 *
 * Return: buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
