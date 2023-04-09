/**
 * clear_bit - sets the value of a bit to 0 at a give index
 * @n: number
 * @index: current index
 *
 * Return: 1 if it is successful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int byte_in_bit = 8;

	if (index >= sizeof(unsigned long) * byte_in_bit)
		return (-1);
	*n = (*n) & ~(1 << index);
	return (1);
}
