#include "main.h"
/**
 * print_number: prints an integer.
 * @n: the integer to be printed.
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		num = -num;
	}
	if (n / 10)
		print_number(n / 10);
	putchar('\0' + n % 10);
}
