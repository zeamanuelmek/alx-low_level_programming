#include "main.h"

/**
 * _strncpy - copy at most an inputted number
 * of bytes from string src into dest.
 * @dest: the buffer storing the string copy.
 * @src: the source string.
 * @n: the max no. of bytes to be copied from src.
 * Return: A pointer resulting string dest.
 */
char *strncpy(char *dest, char *src,int n)
{
	int i = 0, src_len = 0;

	while (src[i])
		src_len++;
	
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
