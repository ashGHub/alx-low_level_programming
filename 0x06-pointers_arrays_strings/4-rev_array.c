/**
 * reverse_array - reverses the content of the array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i < n / 2 ; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
