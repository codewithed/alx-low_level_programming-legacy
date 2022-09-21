#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: dest pointer
 * @src: src pointer
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	while (i = 0; dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';
	return (dest);
}

