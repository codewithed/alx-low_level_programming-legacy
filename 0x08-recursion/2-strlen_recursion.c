#include "main.h"

/**
 * _strlen_recursion - count chars in astring
 * @s: string to be counted
 * Return: int, number of chars in string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return(1 + _strlen_recursion(s + 1));
	}

	return 0;
}

