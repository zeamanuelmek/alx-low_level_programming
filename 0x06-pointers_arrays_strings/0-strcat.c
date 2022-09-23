#include "main.h"
#include <stdio.h>
/**
 * string_length: finds the length of a string.
 * Return: length of c.
 * @pointer: pointer
 */
int string_length(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}

/**
 * _strcat: concatenate two strings.
 * @dest: string to be appended to.
 * @src: string to append.
 * Return: concatenated string
 */
char *strcat(char *dest, const char *src)
{
	int i, n;
	n = string_length(dest);

	for (i = 0; i <  n && src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}
	dest[n + i] = '\0';

	return (dest);

}
