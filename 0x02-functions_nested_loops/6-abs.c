#include "main.h"

/**
 * _abs - gives the absolute value
 * @r: an int
 *
 * Return: 0 if successful
 */

int _abs(int r)
{
	if (r > 0)
		_putchar(r);
	if (r < 0)
	{
		r = r * -1;
		_putchar(r);
	}
	return (0);
}

