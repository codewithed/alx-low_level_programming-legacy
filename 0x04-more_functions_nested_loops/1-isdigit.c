#include "main.h"

/**
 * _isdigit - Checks if the character is a digit
 * @c: an int
 *
 * Return: 1 if is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

