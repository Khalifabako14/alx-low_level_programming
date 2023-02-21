#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @m: second integer
 * @k: third integer
 * Return: largest number
 */

int largest_number(int a, int m, int k)
{
	int largest;

	if (a >= m && a >= k)
	{
		largest = a;
	}
	else if (m >= a && m >= k)
	{
		largest = m;
	}
	else
	{
		largest = k;
	}

	return (largest);
}
