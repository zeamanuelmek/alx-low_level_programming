#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print product of arguemnt numbers
 * @argc: argument couter
 * @argv: numbers to multipy
 * Return: 0 on sucess, 1 if two arguments not given
 */

int main(int argc, char *argv[])
{
	/* validate input */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* multiply two arguments passed via cmd line */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
