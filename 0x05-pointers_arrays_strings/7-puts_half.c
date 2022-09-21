#include "main.h"
#include <stdio.h>

/**
 * _strlen - retunrs the ength of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */
void puts_half(char *str)
{
	int idx;
	int len = _strlen(str);

	/** find the index to start depending on even/odd amount of stren*/
	if (len % 2 != 0)
		idx = (len / 2) + 1;
	else 
		idx = (len / 2);
	while (idx < len)
	{
		putchar(*(str + idx));
	}
	putchar('\n');
}
