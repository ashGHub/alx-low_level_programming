/**
 * _islower - check if character is lowercase or not
 * @c: character to check
 *
 * Return: 1 if lowercase, other-wise 0
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
