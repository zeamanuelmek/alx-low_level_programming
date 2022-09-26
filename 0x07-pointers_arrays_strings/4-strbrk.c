#include "main.h"
#define NUL 0

/**
 * _strbrk: return pointer to byte in s.
 * @s: string to search.
 * @accept: target matches.
 * Return: pointer to index of string at first occurence.
 */

char *_strbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NUL);
}
