#include <stdio.h>

/**
 * main - program execution strats here
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}

	return (0);
}

