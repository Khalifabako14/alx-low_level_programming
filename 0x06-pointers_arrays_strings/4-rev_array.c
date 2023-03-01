#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers.
 * @a: This is the input array
 * @n: This is the positions have the array
 */
void reverse_array(int *a, int n)
{
	int k, final;

	final = n - 1;
	for (k = 0; k < n / 2; k++)
	{
		int start, end;

		start = a[k];
		end = a[final];
		a[k] = end;
		a[final] = start;
		final--;
	}
}
