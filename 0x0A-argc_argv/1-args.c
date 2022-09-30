#include <stdio.h>

/**
 * main - program execution starts here
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 if successful
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	int i, count;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			count = i;
	}

	printf("%d", count);
	putchar('\n');

	return (0);
}

