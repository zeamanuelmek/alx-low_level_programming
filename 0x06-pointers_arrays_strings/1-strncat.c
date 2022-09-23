#include "main.h"
#include <stdio.h>
/**
 * strncat: concatenate n bytes to destination string.
 * @dest: string to be appended to.
 * @src: string to append.
 * @n: append n number of bytes(chars)
 * @Return: concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dn = 0;

	while (dest[i++])
		dn++;

	for (i = 0; src[i] && i < n; i++)
			dest[dn++] = src[i];
	
	return (dest);
}
