#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the min num of coins for an amt of money
 * @argc: shoulld count two arguuments
 * @argv: argumentsgiven
 * Return: least num of coins, 0 if -ve, 1 if +ve
 */

int main(int argc, char *argv[])
{
	int n, coins = 0;

	/* validate input */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	/* convert string to int and calculate coins */
	n = atoi(argv[1]);
	if (n > 0)
	{
		for (; n >= 25; coins++)
		{
			n = n - 25;
		}
		for (;  n >= 10; coins++)
		{
			n = n - 10;
		}
		for (; n >= 5; coins++)
		{
			n = n - 5;
		}
		for (; n >= 2; coins++)
		{
			n = n - 2;
		}
		for (; n >= 1; coins++)
		{
			n = n - 1;
		}
	}

	printf("%d\n", coins);
	return (0);
}
