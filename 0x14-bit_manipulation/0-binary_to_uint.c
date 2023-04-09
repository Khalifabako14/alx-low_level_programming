#include "main.h"

/**
  * binary_to_uint - Function that converts a binary number
  * to an unsigned int
  * @b: binary number
  * Return: the converted number or 0 if Unsuuccesful
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k, bako;
	int a;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
		;
	n--;
	for (bako = 1, k = 0; a >= 0; --)
	{
		if (b[a] == '0')
		{
			bako *= 2;
			continue;
		}
		else if (b[a] == '1')
		{
			k += bako;
			bako *= 2;
			continue;
		}
		return (0);
	}
	return (k);
}
