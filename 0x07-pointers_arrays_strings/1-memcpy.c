#include "main.h"

/**
 * _memcpy - copies memory area from destination to source
 * @dest: destination of copied memory
 * @src: source of copied memory
 * @n: how much memory to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

