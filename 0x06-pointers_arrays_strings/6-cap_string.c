#include "main.h"

/**
 * cap_string: captilizes all words of a string
 * @str: string
 * Return: a pointer to the changed string.
 */
char *cap_string(char *str)
{
	int i;



		for (i = 0; str[i] != '\0'; i++)

				{

							if (i == 0)

										{

														if ((str[i] >= 97 && str[i] <= 122))

																		{

																							str[i] = str[i] - 32;

																											continue;

																														}

																}

									else if (str[i] == ' ')

												{

																++i;

																			if (str[i] >= 97 && str[i] <= 122)

																							{

																												str[i] = str[i] - 32;

																																continue;

																																			}

																					}

											else

														{

																		if (str[i] >= 65 && str[i] <= 90)

																						{

																											str[i] = str[i] + 32;

																														}

																				}

												}

			return (str);

}
