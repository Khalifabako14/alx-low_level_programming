#include "main.h"

/**
 * print_times_table - Prints the k times table
 * @k: The value of the times table to be printed
 */

void print_times_table(int k)
{
	int num, mult, prod;

	if (k >= 0 && k <= 15)
	{
		for (num = 0; num <= k; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= k; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
