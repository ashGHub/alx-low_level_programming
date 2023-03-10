#include <stdio.h>
#include <stdlib.h>

/**
 * minimum_coins - gets the minimum number of coins
 *                 from 25, 10, 5, 2, and 1
 * @money: dollar value
 *
 * Return: minimum number of coins
 */
int minimum_coins(int money)
{
	int i, changes = 0;
	int coins[] = {25, 10, 5, 2, 1};

	for (i = 0; i <= 4; i++)
	{
		changes += money / coins[i];
		money %= coins[i];
	}

	return (changes);
}

/**
 * main - prints the minimum number of coins to make change
 *        for an amount of money
 * @argc: size of arguments
 * @argv: array of arguments
 *
 * Return: 1 if successful, other-wise 0
 */
int main(int argc, char **argv)
{
	int money, changes = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	money = atoi(argv[1]);

	if (money >= 0)
		changes = minimum_coins(money);

	printf("%d\n", changes);
	return (0);
}
