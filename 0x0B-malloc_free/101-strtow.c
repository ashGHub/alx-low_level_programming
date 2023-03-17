#include <stdlib.h>

/**
 * free_grid - free each rows
 * @grid: 2D array pointer
 * @height: number of rows
 *
 * Return: Nothing
 */
void free_grid(char **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

/**
 * copy_word - Copy word starting from the given index
 * @str: string
 * @idx: current index
 *
 * Return: pointer to the copied word
 */
char *copy_word(char *str, int *idx)
{
	int i = *idx, j = 0, len = 0;
	char c = *(str + i);
	char *wrd;

	for ( ; c && c != '\t' && c != ' '; i++, len++, c = *(str + i))
		;
	wrd = malloc(sizeof(char) * len);
	if (wrd == NULL)
		return (NULL);
	/* copy */
	i = *idx;
	while (j < len)
	{
		*(wrd + j) = *(str + i);
		(*idx)++;
		j++;
		i++;
	}
	*(wrd + j) = '\0';
	return (wrd);
}

/**
 * set_words - set each word in the array
 * @str: string to split
 * @r: double pointer to hold the words
 *
 * Return: 0 if successful, otherwise non-zero
 */
int set_words(char *str, char **r)
{
	char c;
	int i, h = 0;
	char *w;

	for (i = 0; *(str + i); i++)
	{
		c = *(str + i);
		if (c == '\t' || c == ' ')
			continue;
		w = copy_word(str, &i);
		if (w == NULL)
		{
			free_grid(r, h);
			return (1);
		}
		r[h] = w;
		h++;
		if (*(str + i) == '\0')
			break;
	}
	return (0);
}

/**
 * get_height - counts words as height
 * @str: string
 *
 * Return: number of words as height
 */
int get_height(char *str)
{
	char c;
	int i, height = 0;
	short d = 0; /* flag if have seen tab space before */

	for (i = 0; *(str + i); i++)
	{
		c = *(str + i);
		if (c != '\t' && c != ' ' && d)
		{
			d = 0;
			height++;
		}

		if (c == '\t' || c == ' ')
			d = 1;
	}
	if (c != '\t' && c != ' ')
		height++;
	return (height);
}

/**
 * strtow - splits a string into words by a tab
 * @str: string to split
 *
 * Return: split string
 */
char **strtow(char *str)
{
	int height = 0;
	char **r;

	if (str == NULL || *str == '\0')
		return (NULL);
	height = get_height(str);
	if (height == 0)
		return (NULL);
	r = malloc(sizeof(char *) * height);
	if (set_words(str, r) != 0)
		return (NULL);
	*(r + height) = NULL;
	return (r);
}
