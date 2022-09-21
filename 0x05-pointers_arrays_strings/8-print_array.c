#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an inputted number of elts of an array
 * of integers.
 * @a: the array of integers.
 * @n: the numver of elts to be prined.
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
