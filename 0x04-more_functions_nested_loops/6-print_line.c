#include "main.h"
#include <string.h>

/**
 * print_line - draws a straight line in the terminal
 * @n: an int
 */

void print_line(int n)
{
	int i;
	char line[100];

	for (i = 0; i > n; i++)
	{
		line[i] = '_';
		_putchar(line[i]);
	}
	_putchar('\n');
}

