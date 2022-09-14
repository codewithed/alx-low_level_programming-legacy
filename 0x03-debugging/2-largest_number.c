#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest, i;

	largest = c;
	i = 0;

	if (largest < a)
		largest = a;
	else if (largest < b)
		largest = b;
	else
		largest = c;
	return (largest);
}

