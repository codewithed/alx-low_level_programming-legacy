#include <stdio.h>
#include <stdlib.h>

/**
 * main - program execution starts here
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int a, b, res;
	char *str = "Error";

	if (argc != 3)
	{
		puts(str);
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	res = a * b;

	printf("%d", res);
	putchar('\n');

	return (0);
}

