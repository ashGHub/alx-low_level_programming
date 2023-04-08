/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: bit index
 *
 * Return: bit, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	short byte_in_bit = 8;

	if (index >= sizeof(n) * byte_in_bit)
		return (-1);
	return ((n >> index) & 1);
}
