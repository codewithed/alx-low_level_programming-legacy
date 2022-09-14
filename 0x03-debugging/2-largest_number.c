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
	int largest, n;
	int arr[2];

	arr[0] = a;
	arr[1] = b;
	arr[2] = c;

	for (n = 0; n < 3; ++n)
	{
		if (arr[0] < arr[n])
			 arr[0] = arr[n];
	}
	return (arr[0]);
}

