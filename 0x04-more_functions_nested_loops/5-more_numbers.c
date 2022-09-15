#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14, a new line
 */

void more_numbers(void)
{
	char c;
	int i;

	for (i = 0; i <= 14; i++)
	{
		for (c = '0'; c <= '14'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

