/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to change
 *
 * Return: converted string
 */
char *string_toupper(char *s)
{
	int i, d;

	d = 'a' - 'A'; /* gap betwwen lowercase and uppercase characters*/

	for (i = 0; *(s + i) != '\0'; i++)
	{
		char c = *(s + i);

		if (c >= 'a' && c <= 'z')
			*(s + i) = c - d;
	}

	return (s);
}
