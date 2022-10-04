#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array given a size
 * @size: size of array to be created
 * @c: the car to be initialized
 * Return: pointer to arr;
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);

	*(arr + 0) = c;
	return (arr);
}

