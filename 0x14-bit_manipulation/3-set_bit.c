/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index bit
 *
 * Return: 1 if successful, -1 (otherwise)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	short byte_in_bit = 8;

	if (index >= sizeof(unsigned long) * byte_in_bit)
		return (-1);
	(*n) = (*n) ^ (1 << index);
	return (1);
}
