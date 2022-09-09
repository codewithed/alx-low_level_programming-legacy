#include <stdio.h>
#include  <stdlib.h>

/**
 * main - Program execution starts here
 *
 * Return: Returns 0 if successful, 1 if not
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}

