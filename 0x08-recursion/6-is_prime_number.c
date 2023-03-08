/**
 * is_prime - check if a number is a prime number
 * @n: number to check
 * @d: currrent divider
 *
 * Return: 1 if prime, other-wise 0
 */
int is_prime(int n, int d)
{
	if (d == n)
		return (1);
	if (n % d == 0)
		return (0);
	return (is_prime(n, d + 1));
}

/**
 * is_prime_number - checks if a number is a prime number or not
 * @n: number to check
 *
 * Return: 1 if prime, other-wise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
