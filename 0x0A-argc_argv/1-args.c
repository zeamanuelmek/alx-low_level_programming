#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments passed to program
 * @argc: argment counter
 * @argv: pointer to array arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
