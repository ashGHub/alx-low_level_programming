#include "main.h"
#include <stdio.h>

/**
 * case_1 - test buffer less than max digit
 *
 * Return: void
 */
void case_1(void)
{
	char *n = "19";
	char *m = "9";
	int buffer = 1;
	char r[1];
	char *res;

	printf("%s => ", "Test buffer less than max digit : Have Error");

	res = infinite_add(n, m, r, buffer);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
}


/**
 * case_2 - test buffer equal to max digit and less than sum digit
 *
 * Return: void
 */
void case_2(void)
{
	char *n = "99";
	char *m = "9";
	int buffer = 2;
	char r[2];
	char *res;

	printf("%s => ", "Test buffer equal to max digit and less than sum digit : Have Error");

	res = infinite_add(n, m, r, buffer);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
}

/**
 * case_3 - test buffer equal to max digit and sum digit
 *
 * Return: void
 */
void case_3(void)
{
        char *n = "19";
        char *m = "9";
        int buffer = 2;
        char r[2];
        char *res;

        printf("%s => ", "Test buffer equal to max digit and sum digit : Have Error");

        res = infinite_add(n, m, r, buffer);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
}


/**
 * case_4 - test buffer equal to max digit and greater than sum digit
 *
 * Return: void
 */
void case_4(void)
{
	printf("%s\n", "Test buffer equal to max digit and greater than sum digit : No Such Case");
}

/**
 * case_5 - test buffer greater than max digit by two or more and sum digit equal to max digit
 *
 * Return: void
 */
void case_5(void)
{
	char *n = "19";
	char *m = "9";
	int buffer = 4;
	char r[4];
	char *res;

	printf("%s => ", "Test buffer greater than max digit by two or more and sum digit equal to max digit: No Error");

	res = infinite_add(n, m, r, buffer);
	if (res == 0 && (res[0] < '0' || res[0] > '9'))
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
}

/**
 * case_6 - test buffer greater than max digit by two or more and sum digit greater than max digit
 *
 * Return: void
 */
void case_6(void)
{
	char *n = "99";
	char *m = "9";
	int buffer = 4;
	char r[4];
	char *res;

	printf("%s => ", "Test buffer greater than max digit by two or more and sum digit greater than max digit: No Error");

	res = infinite_add(n, m, r, buffer);
	if (res == 0 && (res[0] < '0' || res[0] > '9'))
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	case_1();
	case_2();
	case_3();
	case_4();
	case_5();
	case_6();
	return (0);
}
