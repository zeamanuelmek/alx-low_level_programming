#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 *_puts_recursion: print string with a new line.
 *@s: string to print.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
