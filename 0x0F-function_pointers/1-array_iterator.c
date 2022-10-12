#include <stddef.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - run a function as a parameter on each element of an array
 * @array: pointer
 * @size: the size of array
 * @action: pointer to the function needed to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

