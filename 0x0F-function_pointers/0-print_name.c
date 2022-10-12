#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: pointer to name
 * @f: pointer function f
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

