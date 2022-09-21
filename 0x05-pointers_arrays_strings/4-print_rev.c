#include "main.h"
#include <stdio.h>
/**
 *print_rev - prints a string, in reverse, followed by a new line
 *@s: string to reverse
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
