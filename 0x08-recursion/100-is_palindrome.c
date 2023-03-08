/**
 * _strlen - get the length of a string
 * @s: string to check
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _palidrome - checks if a string is a palindrome
 * @s: string to check
 * @n: left side index
 * @m: right side index
 *
 * Return: 1 if palidrome, other-wise 0
 */
int _palidrome(char *s, int n, int m)
{
	if (m < n || n == m)
		return (1);
	if (*(s + n) != *(s + m))
		return (0);
	return (_palidrome(s, n + 1, m - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, other-wise 0
 */
int is_palindrome(char *s)
{
	/* empty string */
	if (*s == '\0')
		return (1);
	return (_palidrome(s, 0, _strlen(s) - 1));
}
