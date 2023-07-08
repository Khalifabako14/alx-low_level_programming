#include "main.h"

/**
 * flip_bits - A function that counts how many bits must be flipped
 * @n: one num
 * @m: the other num
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k = n ^ m;
	int count = 0;

	while (k)
	{
		count += k & 1;
		k >>= 1;
	}
	return (count);
}
