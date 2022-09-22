#include "main.h"
#include <string.h>

/**
 * string_toupper - converts lowercase to upper
 * @str: an input string
 *
 * Return: pointer to str
 */

char *string_toupper(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}

	return (str);
}

