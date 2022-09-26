#include "main.h"
#define NULL

/**
 *_strchr: locate 1st occurrence of char in string
 *and returns pointer there.
 *@s: string to search.
 *@c: target character.
 *Return: pointer to that character in string.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) && *(s + i) != c) /* find match */
		i++;

	if ((s + i) == c) /* if match, assign to address */
		return (s + i);
	else 
		return (NULL);
}
