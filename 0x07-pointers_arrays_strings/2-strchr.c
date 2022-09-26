#include "main.h"

/**
 *_strchr: locate 1st occurrence of char in string
 *and returns pointer there.
 *@s: string to search.
 *@c: target character.
 *Return: pointer to that character in string.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c) /* if match, assign to address */
		{
		return (s);
		}
		s++;
	}
	return (0);
}
