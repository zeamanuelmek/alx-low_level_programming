#include "main.h"
#include <stdio.h>
/**
 *print_rev - prints a string, in reverse, followed by a new line
 *@s: string to reverse
 */

void print_dev(char *s)
{

	int len = 0;
	int i;

	while (s[i++])
		len ++;
	for (i = len - 1; i >= 0; i--)
		putchar(s[i]);

	putchar('\n');
}
