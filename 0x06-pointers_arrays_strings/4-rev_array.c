#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: an array
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	const int A_LEN = n;
	int i;
	int rev[100];

	for (i = 0; i < A_LEN; i++)
	{
		rev[i] = a[n - 1];
		n--;
	}

	for (i = 0; i < A_LEN; i++)
	{
		a[i] = rev[i];
	}
}

