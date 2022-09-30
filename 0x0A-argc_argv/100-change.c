#include <stdio.h>
#include <stdlib.h>
#include "main.h"
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

	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	/* convert string to int and calculate coins */
	n = atoi(argv[1]);

	coins += n / 25;
	n = n % 25;
	coins += n / 10;
	n = n % 10;
	coins += n / 5;
	n = n % 5;
	coins += n / 2;
	n = n % 2;
	coins += n / 1;

	printf("%d\n", coins);
	return (0);
}
