#include <stdio.h>
#include <string.h>

/**
 * main - Program execution starts here
 *
 * Return: Returns 1 if successful
 */

int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int len = strlen(str1);

	for (int i = 0; i >= len; i++)
		putchar(str1[i]);
	putchar('\n');
	return (1);
}

