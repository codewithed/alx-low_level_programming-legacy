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
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		arr = (char *)malloc(sizeof(char) * size);

		if (arr != NULL)
		{
			for (i = 0; i < size; i++)
				arr[i] = c;
		}
	}

	return (arr);
}

