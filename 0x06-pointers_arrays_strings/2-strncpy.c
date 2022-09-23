#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copy at most an inputted number
 * of bytes from string src into dest.
 * @dest: the buffer storing the string copy.
 * @src: the source string.
 * @n: the max no. of bytes to be copied from src.
 * Return: A pointer resulting string dest.
 */
char *_strncpy(char *dest, char *src,int n)
{
	int i;
	
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
