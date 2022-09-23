#include "main.h"
#include <stdio.h>
/**
 * strcat: concatenate two strings
 *@dest: string to append to
 @src: string to append
 * Return: concatenated string.
 */
char *strcat(char *dest, const char *src)
{
	int i = 0, n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';

	return (dest);

}
