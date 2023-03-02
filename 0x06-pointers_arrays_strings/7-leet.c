/**
 * _encode - encode given character
 * @c: character to encode
 *
 * Return: encoded character
 */
char _encode(char c)
{
	char lowers[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char uppers[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char encodes[] = {'4', '3', '0', '7', '1', '\0'};

	int j;

	for (j = 0; lowers[j] != '\0'; j++)
	{
		if (c == lowers[j] || c == uppers[j])
			return (encodes[j]);
	}

	return (c);
}

/**
 * leet - encodes a string into 1337
 * replaces a,A=4, e,E=3, o,O=0, t,T=7, l,L=1
 * @s: string to encode
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		*(s + i) = _encode(*(s + i));

	return (s);
}
