#include "main.c"
#include <string.h>
#include <stdio.h>

/**
 * _strdup - duplicates a string
 * @str: the string provided
 * Return: pointer to a string
 */

char *_strdup(char *str)
{
	int i;
	char *res;
	int len = strlen(str);

	if (str == NULL)
		return (NULL);
	if (len != 0)
	{
		res = (char *)malloc(sizeof(char) * len);

		if (res != NULL)
		{
			for (i = 0; i < len; i++)
				res[i] = str[i];
		}
	}

	return (res);
}

