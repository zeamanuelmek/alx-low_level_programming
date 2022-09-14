#include <stdio.h>
#include "main.h"


/**
 * main - entrypoint
 *
 * Return: always 0
 */
int main(void)
{
	int squared;

	squared = getSquare('c');
	printf("The value of squared is: %d\n", squared);
	return (0);
	}
