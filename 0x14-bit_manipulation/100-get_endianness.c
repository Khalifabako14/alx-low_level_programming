#include "main.h"

/**
 * get_endianness - A function that shows how numbers are ordered by mag
 * Return: int
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c)
		return (1);
	else
		return (0);
}
