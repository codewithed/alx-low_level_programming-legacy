#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: number of bytes to append
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr = malloc(strlen(s1) + n + 1);
	unsigned int i = 0;
	unsigned int j;

	if (newstr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		newstr[i] = s1[i];
	}

	for (j = 0;  j < n; j++)
	{
		newstr[i] = s2[j];
		i++;
	}

	/* make newstr null-terminated */
	newstr[i] = '\0';
	return (newstr);
}

