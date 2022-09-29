#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints astring in reverse recursively
 * @s: string to be printed
 */

void _print_rev_recursion(char *s)
{

	if (*(s + 1) == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*(s + 0));
}

