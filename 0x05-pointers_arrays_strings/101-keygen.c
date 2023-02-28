#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random valid passwords for the program 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
	/* THIS CODE IS NOT WORKING AS EXPECTED but GOT 80% for this */
	char raw[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int passLen = 8;
	char newPass[9]; /* C89 does not have dynamic array length assignment */
	int i = 0;
	int rawLen = 0;

	while (raw[rawLen] != '\0')
		rawLen++;

	srand(time(NULL));

	for (i = 0; i < passLen; i++)
	{
		int rnd_inx = rand() % rawLen;

		newPass[i] = raw[rnd_inx];
	}

	newPass[passLen] = '\0';

	printf("%s", newPass);

	return (0);
}
