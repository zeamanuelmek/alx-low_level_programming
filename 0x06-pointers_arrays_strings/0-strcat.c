#include "main.h"
#include <stdio.h>
/**
 *_strcat: concatenate two strings
 *@dest: string to append to
 @src: string to append
 * Return: concatenated string.
 */
char *strcat(char *dest, const char *src)
{
	int i = 0, n = 0;

	while (dest[i++])
		n++;

	for (i = 0; src[i]; i++)
		dest[n++] = src[i];

	return (dest);

}
