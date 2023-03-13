#include <stdlib.h>

/**
 * total_len - gets the total len of each arguments
 * @ac: size of array
 * @av: array of arguments
 *
 * Return: total len
 */
int total_len(int ac, char **av)
{
	char *a;
	int i, j, len = 0;

	for (i = 0; i < ac; i++)
	{
		a = av[i];
		for (j = 0; *(a + j); j++, len++)
			;
	}
	return (++len);
}

/**
 * tostr - concatenates all the arguments to a string
 * @ac: size of the arguments
 * @av: array of arguments
 * @s: string buffer
 *
 * Return: Nothing
 */
void tostr(int ac, char **av, char *s)
{
	char *a;
	int i, j, len = 0;

	for (i = 0; i < ac; i++, len++)
	{
		a = av[i];
		for (j = 0; *(a + j); j++, len++)
			*(s + len) = *(a + j);
		*(s + len) = '\n';
	}
}

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: size of arguments
 * @av: array of arguments
 *
 * Return: pointer to concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	char *r;
	int len, newline_size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = total_len(ac, av) + newline_size;
	r = malloc(sizeof(char) * len);
	if (r == NULL)
		return (NULL);
	tostr(ac, av, r);
	return (r);
}
