#include "main.h"

/**
 * print_last_digit - Prints lasts digit
 * @n: an int
 *
 * Return: Value of last digit
 */

int print_last_digit(int n)
{
	int last, least;

	last = n % 10;

	if (last < 0)
		last = last * (-1);
	least = last + 48;

	_putchar(least);
	return (last);
}

