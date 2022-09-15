#include "main.h"
#include <string.h>

/**
 * more_numbers - prints 10 times the numbers from 0 to 14, a new line
 */

void more_numbers(void)
{
	char str[] = "01234567891011121314";
	int i, j, len;

	len = strlen(str);

	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j < len; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
}

