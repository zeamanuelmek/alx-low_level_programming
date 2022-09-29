#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of the string.
 * @s: string to be measured.
 *
 * return: lenth of the string.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
