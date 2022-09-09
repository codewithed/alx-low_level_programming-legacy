#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program execution starts here
 *
 * Return: Returns 0 if successful, 1 if not
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i < 57)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
		if (i == 57)
			putchar(i);
	}
	return (0);
}

