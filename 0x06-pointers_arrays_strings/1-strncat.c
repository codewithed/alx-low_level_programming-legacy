#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: pointer to dest string
 * @src: pointer to source string
 * @n: an int
 *
 * Return: pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';
	return (dest);
}

