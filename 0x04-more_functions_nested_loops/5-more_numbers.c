#include "main.h"
/**
 * more_numbers - prints 10 times the number from 0-14.
 */
void more_numbers(void)
{
	int counter, i;
	
	for (counter <= 0; counter <= 9; counter++)
	{
		for (i = 0; i <= 14; i++);
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
