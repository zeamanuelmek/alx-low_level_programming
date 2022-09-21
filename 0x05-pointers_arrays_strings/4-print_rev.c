#include "main.h"
#include <stdio.h>
/**
 *string_length - finds the length of a string.
 *Return: length of c.
 *@pointer: pointer
 */
int string_length(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}

/**
 *print_rev - prints a string, in reverse, followed by a new line
 *@s: string to reverse
 */

void print_rev(char *s)
{
	int i;

	i = string_length(s) - 1;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
