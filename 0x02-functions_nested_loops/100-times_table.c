#include "main.h"
/**
 * print_times_table - prints the times table of the input
 * starting with 0.
 * @n: the value of the times tables to be printed.
 */
void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			for (mult = 0; mult <= n; mult++)
			{
				prod = num * mult;
				if (mult == 0)
					_putchar('0' + prod);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (prod <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + prod);
					}
					else if (prod > 9 && prod < 100)
					{
						_putchar(' ');
						_putchar('0' + (prod / 10));
						_putchar('0' + (prod % 10));
					}
					else if (prod >= 100)
					{
						_putchar('0' + (prod / 100));
						_putchar('0' + ((prod / 10) % 10));
						_putchar('0' + (prod % 10));
					}
				}
			}
			_putchar('\n');
		}	
	}	
}
