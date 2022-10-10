#include "main.h"
#include <stdio.h>

/**
 * main - program execution starts here
 * Return: 0 if successful
 */

int main(void)
{
	int i;

	for (i = 0; __FILE__[i] != '\0'; i++)
	{
		_putchar(__FILE__[i]);
	}
	_putchar('\n');
	return (0);
}

