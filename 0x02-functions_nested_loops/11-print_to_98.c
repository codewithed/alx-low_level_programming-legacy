#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - print natural numbers from n to 98
 * @n: an int
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d", n);
				putchar('\n');
			if (n != 98)
			{
				printf("%d, ", n);
			}
			n++;
		}
	}

	else
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%d", n);
				putchar('\n');
			if (n != 98)
			{
				printf("%d, ", n);
			}
			n--;
		}
	}
}

