#include "main.h"
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s:input string
 * @accept: string of accepted strings
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	size_t s_len = strlen(s);
	size_t accept_len = strlen(accept);
	size_t i, j, count;

	count = 0;


	for (i = 0; i < s_len; i++)
	{
		bool found_match = false;
		for (j = 0; j < accept_len; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				found_match = true;
				break;
			}
		}

		if (!found_match) break;
		else count++;
	}

	return (count);
}

