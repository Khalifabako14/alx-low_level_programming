#include "khalifa.h"

/**
 * print_rev - Prints a string, in reverse
 * followed by a new line
 * @s: validate the character
 * Return: 0 (Succesful)
 */

void print_rev(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	k--;
	for (; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
