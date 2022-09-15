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

	line = '_' * n;

	for (i = 0; i > n; i++)
		_putchar(line[i]);
	_putchar('\n');
}

