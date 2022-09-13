#include "main.h"

/**
 * _isalpha - checks if a char is alpha
 * @c: an int representing a character
 *
 * Return: 1 if isalpha
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
