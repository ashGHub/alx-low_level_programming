/**
 * _isalpha - checks if a given character is alphabetic
 * @c: character to check
 *
 * Return: 1 if successful, other-wise 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
