/**
 * flip_bits - gets the number of bits you would need
 *             to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int byte_in_bits = 8;
	int shift = (sizeof(n) * byte_in_bits);
	int len = 0;

	while (shift--)
		len += (n >> shift & 1) != (m >> shift & 1);
	return (len);
}
