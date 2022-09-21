#include "main.h"
/**
 * _strlen - returns the length of the strig
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;
	 
	while (*s != '\0')
	{
		len ++;
		s++;
	}
	return (len);
}
/**
 * puts2 - prints every second char
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i+= 2)
		_putchar(str[i]);

	_putchar('\n');
}
