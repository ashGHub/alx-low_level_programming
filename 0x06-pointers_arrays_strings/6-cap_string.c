/**
 * is_word_separator - check if the given char is a word separator
 * @c: character to check
 *
 * Return: 1 for yes, 0 for no
 */
short is_word_separator(char c)
{
	int i;
	char d[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; d[i] != '\0'; i++)
	{
		if (d[i] == c)
			return (1);
	}

	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: capitalized words of a string
 */
char *cap_string(char *s)
{

	int i, d;
	char c, prvC;

	d = 'a' - 'A'; /* gap betwwen lowercase and uppercase characters*/

	for (i = 0; *(s + i) != '\0'; i++)
	{
		prvC = c;
		c = *(s + i);

		if ((i == 0 || is_word_separator(prvC)) && c >= 'a' && c <= 'z')
			*(s + i) = c - d;

	}

	return (s);
}
