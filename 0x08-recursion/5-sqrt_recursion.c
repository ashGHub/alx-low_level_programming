/**
 * _sqrt - get the square root of a number
 * @n: a number to find the sqrt of
 * @t: number to check if it is sqrt of n
 *
 * Return: squre root of a number
 */
int _sqrt(int n, int t)
{
	int r = t * t;

	if (r == n)
		return (t);
	if (r > n)
		return (-1);
	return (_sqrt(n, t + 1));
}


/**
 * _sqrt_recursion - returns the natural square root
 *                   of a number using recursion
 * @n: integer number
 *
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt(n, 2));
}
