#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 *  @s: a string to be printed
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == "")
	{
		_putchar('\n');
		return;
	}

	_putchar(*(s + i));
	i++;
}

