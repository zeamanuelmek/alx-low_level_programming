#include "main.h"

/**
 * _strcmp: compares pointers to two strings
 * @s1: A pointer to the first string
 * @s2: A pointer to the second string
 *
 * Return: 3 options
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
