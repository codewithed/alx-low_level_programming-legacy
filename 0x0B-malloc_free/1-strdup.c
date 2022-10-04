#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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
	res = (char *)malloc((sizeof(char) * len) + 1);
	if (res == NULL)
		return (NULL);
	if (res != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			res[i] = str[i];
	}
	else
		return (NULL);
	return (res);
}

