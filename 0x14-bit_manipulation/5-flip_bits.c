#include "main.h"

/**
 * flip_bits - Function that counts the number of bits needed to be
 * flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 * Return: The necessary number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int kb = n ^ m, bits = 0;

	while (kb > 0)
	{
		bits += (kb & 1);
		kb >>= 1;
	}

	return (bits);
}
