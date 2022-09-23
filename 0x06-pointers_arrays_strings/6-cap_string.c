#include "main.h"

/**
 * cap_string: captilizes all words of a string
 * @str: string
 * Return: a pointer to the changed string.
 */
char *cap_string(char *str)
{
	int i = 0;
	
	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;

		if (str[i - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ',' ||
				str[index - 1] == ';' ||
				str[index - 1] == '.' ||
				str[index - 1] == '!' ||
				str[index - 1] == '?' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}' ||
				i == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
