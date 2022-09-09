#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program execution starts here
 *
 * Return: Returns 0 if succesful, 1 if not
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
