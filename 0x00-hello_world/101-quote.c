#include <stdio.h>
#include <string.h>

/**
 * main - Program execution starts here
 *
 * Return: Returns 1 if successful
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", str);
	return (1);
}

