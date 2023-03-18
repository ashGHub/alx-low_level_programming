#include "main.h"
#include <stdlib.h>

/**
 * print_num - prints large digit number
 * @num: string number
 *
 * Return: Nothing
 */
void print_num(char *num)
{
	unsigned int i;
	short significantZero = 0;
	char n;

	for (i = 0; *(num + i); i++)
	{
		n = *(num + i);
		if (n == '0' && !significantZero)
			continue;
		significantZero = 1;
		_putchar(n);
	}
	_putchar('\n');
}

/**
 * _calloc_array - allocate memory for an array malloc
 *           This functions as calloc
 * @nmemb: length of the array
 * @size: size of array element
 *
 * Return: pointer to the allocated memory
 */
char *_calloc_array(unsigned int nmemb, unsigned int size)
{
	char *r;
	unsigned int c_size, i;

	c_size = nmemb * size;
	if (c_size <= 0)
		return (NULL);
	r = malloc(c_size);
	if (r == NULL)
		return (NULL);
	for (i = 0; i < c_size - 1; i++)
		r[i] = '0';
	r[i] = '\0';
	return (r);
}

/**
 * _strlen - gets the length of a given string
 * @s: string to check
 *
 * Return: length of a string excluding null byte
 */
short _strlen(char *s)
{
	unsigned int len;

	for (len = 0; *(s + len); len++)
		;
	return (len);
}

/**
 * larger_num - get the largest number from the give numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: largest number
 */
char *larger_num(char *num1, char *num2)
{
	if (_strlen(num1) >= _strlen(num2))
		return (num1);
	return (num2);
}

/**
 * mul - multiplies two big numbers
 * @num1: first number pointer
 * @num2: second number pointer
 *
 * Return: pointer to the product of the numbers
 */
char *mul(char *num1, char *num2)
{
	char *result, *s_num, *l_num;
	int i, j, a_size, s_len, l_len, idx, cidx;
	int product, carry = 0, n1, n2, n3;

	l_num = larger_num(num1, num2);
	s_num = l_num != num1 ? num1 : num2;
	s_len = _strlen(s_num);
	l_len = _strlen(l_num);
	a_size = s_len + l_len + 1;
	idx = a_size - 2;

	result = _calloc_array(a_size, sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = s_len - 1; i >= 0; i--, idx--)
	{
		for (cidx = idx, j = l_len - 1; j >= 0; j--, cidx--)
		{
			n1 = s_num[i] - '0';
			n2 = l_num[j] - '0';
			n3 = result[cidx] - '0';
			product = (n1 * n2) + n3 + carry;
			result[cidx] = '0' + (product % 10);
			carry = product / 10;
		}
		if (carry)
		{
			result[cidx] = '0' + carry;
			carry = 0;
		}
	}
	if (carry)
	{
		result[cidx] = '0' + carry;
		carry = 0;
	}
	return (result);
}

/**
 * print_error - prints errors message
 *
 * Return: Nothing
 */
void print_error(void)
{
	char *err = "Error\n";
	int i;

	for (i = 0; *(err + i); i++)
		_putchar(*(err + i));
}

/**
 * is_num - check if all elements are numbers
 * @s: string numbers
 *
 * Return: 1 if is num otherwise 0
 */
short is_num(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		char c = *(s + i);

		if (c < '0' || c > '9')
			return (0);
	}
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: arguments length
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char *p;

	if (argc != 3 || !is_num(argv[1]) || !is_num(argv[2]))
	{
		print_error();
		exit(98);
	}
	p = mul(argv[1], argv[2]);
	if (p == NULL)
		return (1);
	print_num(p);
	free(p);
	return (0);
}
