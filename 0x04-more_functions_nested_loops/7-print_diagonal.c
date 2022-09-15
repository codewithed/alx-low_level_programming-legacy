#include "main.h"

/**
 * print_diagonal - Prints a diagonal
 * @n: an int
 */

void print_diagonal(int n)
{
	int m, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (m = 0; m < n; m++)
		{
			for (i = 1; i < m; i++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}

