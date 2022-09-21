#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string followed by a new line to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		putchar(str[i]);

	putchar('\n');
}
