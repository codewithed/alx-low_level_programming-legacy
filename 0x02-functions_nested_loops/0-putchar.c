#include "main.h"
#include <string.h>

/**
 * main - Program excution starts here
 *
 * Return: Return 0 if successful, 1 if not
 *
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	char str[] = "_putchar";
	int i, len;

	len = strlen(str);

	for (i = 0; i <= len; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}

