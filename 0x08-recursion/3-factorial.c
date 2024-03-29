#include "main.h"

/**
 * factorial - gets factorial of number
 * @n: int of which to get factorial
 * Return: int, factorial of n
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

