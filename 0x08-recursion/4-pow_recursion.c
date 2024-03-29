#include "main.h"

/**
 * _pow_recursion - gets anumber raised to a power
 * @x: an int
 * @y: an int
 * Return: value of x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}

