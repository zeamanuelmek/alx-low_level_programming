#include <stdio.h>

/**
 * main - Entry point, print 00 to 99 using putchar
 * Return: Always zero
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
