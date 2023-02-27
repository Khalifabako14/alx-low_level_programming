#include "khalifa.h"

/**
 * swap_int - Swaps the values of two integers
 * @a : a is a value
 * @b : b is a value
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
