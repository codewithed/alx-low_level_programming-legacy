#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program execution starts here
 *
 * Return: Returns 0 if successful, 1 if not
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

