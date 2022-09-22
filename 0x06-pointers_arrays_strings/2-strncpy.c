#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - copies a src string to a destination string
 * @dest: pointer to destinations string
 * @src: pointer to source string
 * @n : determines how many chars to copy
 *
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int src_len;

	src_len = sizeof(*src);

	for (i = 0; i < n; i++)
	{
		if (i < src_len)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}

	return (dest);
}

