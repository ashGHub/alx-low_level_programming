/**
 * _max_size - gets the number with max digit
 * and set max digit and min digit
 * @n1: first number
 * @n2: second number
 * @maxDigit: pointer to set max digit
 * @minDigit: pointer to set min digit
 *
 * Return: number with max digit
 */
char *_max_size(char *n1, char *n2, int *maxDigit, int *minDigit)
{
	int n1Digit, n2Digit;

	for (n1Digit = 0; *(n1 + n1Digit) != '\0'; n1Digit++)
		;

	for (n2Digit = 0; *(n2 + n2Digit) != '\0'; n2Digit++)
		;

	if (n1Digit >= n2Digit)
	{
		*maxDigit = n1Digit;
		*minDigit = n2Digit;
		return (n1);
	}

	*maxDigit = n2Digit;
	*minDigit = n1Digit;

	return (n2);
}

/**
 * infinite_add - adds two numbers of any given digit size
 *
 * Description: I have included a test case for this
 * with file name 100-main_test.c,
 * note that, for exampel maxDigit 2 mean,
 * the array can hold 3 digits and so on
 *
 * @n1: first number
 * @n2: second number
 * @r: result buffer
 * @size_r: buffer size
 *
 * Return: pointer to the sum array
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int mx, mn, rs, minDigit, maxDigit, maxSumDigit, carry = 0;
	char *min_num, *max_num;

	max_num = _max_size(n1, n2, &maxDigit, &minDigit);
	min_num = max_num == n1 ? n2 : n1;
	maxSumDigit = maxDigit + 1;

	/* doesn't fit buffer store */
	if (maxSumDigit >= size_r)
		return (0);

	r[maxSumDigit] = '\0';
	mx = maxDigit - 1;
	mn = minDigit - 1;
	rs = maxDigit;

	for ( ; mx >= -1; mn--, mx--, rs--)
	{
		int a = mn < 0 ? 0 : *(min_num + mn) - '0';
		int b = mx < 0 ? 0 : *(max_num + mx) - '0';
		int res = a + b + carry;
		int sum = res % 10;

		carry = res / 10;
		r[rs] = sum + '0';
	}

	if (r[0] == '0')
		return (r + 1);

	return (r);
}
