#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * Return: pointer to a string
 */

char *str_concat(char *s1, char *s2)
{
	char *res = NULL;
	int i, j;
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);

	res = (char *)malloc(1 + s1_len + s2_len * sizeof(char));

	for (i = 0; i <= s1_len; i++)
	{
		if (s1 == NULL)
			s1[i] = "";
		res[i] = s1[i];
	}

	for (j = 0; j <= s2_len; j++)
	{
		if (s2 == NULL)
			s2[j] = "";
		res[i + 1] = s2[j];
		i++;
	}

	return (res);
}

