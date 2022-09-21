#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 */
void print_dev(char *s)
{
int len = 0;
int i;

/*iterate to find length of string and point to last character*/
while (*s != '\0')
{
	len++;
	++s;
}

/* go back to characher before null character */
s--;

/* print string reversed */
for (i = len; i > 0; i--)
{
	putchar(*s);
	s--;
}
putchar('\n');
}
