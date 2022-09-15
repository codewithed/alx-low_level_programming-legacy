#include <stdio.h>
#include <stdlib.h>

/**
 * main - code executions starts here
 *
 * Return: 0 if successful,1 if not
 */

int main(void)
{
	int i;
	char fb[] = "FizzBuzz";
	char f[] = "Fizz";
	char b[] = "Buzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s ", fb);
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("%s ", f);
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("%s ", b);
			continue;
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}

