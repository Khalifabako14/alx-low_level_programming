#include "main.h"

/**
 * print_alphabet_x10 - Prints alpha 10 times
 */

void print_alphabet_x10(void)
{
	int ten;
	char khalifa;

	for (ten = 0; ten <= 9; ten++)
	{
		for (khalifa = 'a'; khalifa <= 'z'; khalifa++)
			_putchar(khalifa);
		_putchar('\n');
	}
}
