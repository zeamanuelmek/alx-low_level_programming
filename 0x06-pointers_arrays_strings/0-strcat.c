#include "main.h"
/**
 * _strcat: concatenate two strings.
 * @dest: string to be appended to.
 * @src: string to append.
 * Return: concatenated string
 */
char *strcat(char *dest, const char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);

}
