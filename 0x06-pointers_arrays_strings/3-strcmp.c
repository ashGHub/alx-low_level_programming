/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 for equals,
 * -ve number if s1 is less than s2
 *  +ve number if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0;
	int i;

	for (i = 0; result == 0; i++)
	{
		char a = *(s1 + i);
		char b = *(s2 + i);

		if (a == '\0' && b == '\0')
			break;

		result = a - b;
	}

	return (result);
}
