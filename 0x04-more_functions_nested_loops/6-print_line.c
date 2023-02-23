#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: number of times the character '_' should be printed
 * Return: a straight line
 */


void print_line(int n)
{
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 1; k <= n; k++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
