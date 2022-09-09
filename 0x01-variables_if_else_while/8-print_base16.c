#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program execution sarts here
 *
 * Return: Returns 0 if succesful, 1 if not succesful
 */

int main(void)
{
	char ch;
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

