#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strchr - searches a string for a char c
 * @s: string
 * @c: char to search for
 * Return: pointer to first occurence of char c
 */

char *_strchr(char *s, char c)
{
	char *ptr;
	unsigned int i;
	unsigned int len = strlen(s);


	for (i = 0; i <= len; i++)
	{
		if (*(s + i) == c)
		{
			ptr = &*(s + i);
			return (ptr);
		}
	}
	return (NULL);
}

