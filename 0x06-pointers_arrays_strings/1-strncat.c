#include "main.h"
#include <stdio.h>
/**
 * _strncat: concatenate n bytes to destination string.
 * @dest: string to be appended to.
 * @src: string to append.
 * @n: append n number of bytes(chars)
 * @Return: concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, n = 0;

	while (dest[i++])
		n++;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[n++] = src[i];
	}
	dest[i] = '\0';
	
	return (dest);
}
