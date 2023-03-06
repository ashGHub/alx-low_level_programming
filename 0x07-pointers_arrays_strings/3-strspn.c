/**
 * _strspn - gets the length of a prefix substring
 *
 * Description: Example, *s = "hello, world", *accept = "oleh",
 *              the matching characters in "hello, world"
 *              are "h", "e", "l", and "o", because these are
 *              the only characters in the string "oleh". The
 *              function stops counting matches when it
 *              encounters the comma "," in the input string,
 *              which is not included in the set of characters
 *              specified in the second argument.
 *              The result is 5, because there are two "l"s
 *              before ","
 *
 * @s: string
 * @accept: accepted bytes
 *
 * Return: number of bytes in the initial segments
 */
unsigned int _strspn(char *s, char *accept)
{
	short hasMatch = 0;
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(accept + j) == *(s + i))
			{
				hasMatch = 1;
				break;
			}
			hasMatch = 0;
		}

		if (hasMatch == 0)
			return (i);
	}
	return (i);
}
