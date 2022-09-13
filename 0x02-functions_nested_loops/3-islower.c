#include "main.h"

/**
 * _islower - checks if a character is lower or not
 * @c: an int which represents a haracter
 *
 * Return: ! if successful, 0 if otherwise
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}

