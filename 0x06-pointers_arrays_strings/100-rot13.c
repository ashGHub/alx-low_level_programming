/**
 * _encode - encodes character using rot13
 * @c: character to encode
 *
 * Return: encoded character
 */
char _encode(char c)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int i;

	for (i = 0; alph[i] != '\0'; i++)
	{
		if (c == alph[i])
			return (rot13[i]);
	}

	return (c);
}

/**
 * rot13 - encodes string using rot13
 * @s: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		*(s + i) = _encode(*(s + i));

	return (s);
}
