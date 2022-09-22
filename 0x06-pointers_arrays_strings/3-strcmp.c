#include "main.h"
#include <string.h>

/**
 * _strcmp -  compares two strings and returns an int
 * @s1: a string
 * @s2: a string too :)
 *
 * Return: an int
 */

int _strcmp(char *s1, char *s2)
{
	int res = 0;
	int i;
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	int longest;

	if (s1_len > s2_len)
		longest = s1_len;
	else
		longest = s2_len;



	for (i = 0; i < longest; i++)
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}
		else if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
	}

	return (res);
}

