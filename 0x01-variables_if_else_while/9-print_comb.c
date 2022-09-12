#include <stdio.h>

/**
 * main - Entry point, print 00 to 99 using putchar
 * Return: Always zero
 */

int main(void)
{
	int i;

	for (i = 0; i <= 99; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		if (i == 99)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
