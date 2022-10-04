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
	unsigned int i;
	int n;
	char *res = NULL;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	res = (char *)malloc(n + 1 * sizeof(char));
	if (res != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			res[i] = str[i];
	}
	else
		return (NULL);
	res[i] = '\0';
	return (res);
}

