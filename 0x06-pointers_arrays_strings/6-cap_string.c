#include "main.h"
#include <string.h>

/**
 * *cap_string - capitalizes all words
 * @str: an input string
 *
 * Return: pointer to a string
 */

char *cap_string(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] -= 32;
		else if (str[i] == ',' || str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
				continue;
			}
/*
*		else if (str[i] >= 59 && str[i] <= 63)
 *		{
 *			if (str[i + 1] >= 97 && str[i + 1] <= 122)
 *			{
 *				str[i + 1] -= 32;
 *				i++;
 *				continue;
 *			}
 *		}
 *
 *		else if (str[i + 1] == 123 || str[i + 1] == 125)
 *		{
 *			if (str[i + 1] >= 97 && str[i + 1] <= 122)
 *			{
 *				str[i + 1] -= 32;
 *				i++;
 *				continue;
 *			}
 */
		}
	}
	return (str);
}

