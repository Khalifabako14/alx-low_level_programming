#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers to 98, followed by a new line
 * @k: the starting number
 */

void print_to_98(int k)
{
	if (k >= 98)
	{
		while (k > 98)
			printf("%d, ", k--);
		printf("%d\n", k);
	}
	else
	{
		while (k < 98)
			printf("%d, ", k++);
		printf("%d\n", k);
	}
}
