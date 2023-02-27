#include "khalifa.h"

/**
 * puts_half - Prints half of a string,
 * followed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int len, y, k;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (k = len / 2; str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}
	}
	else if (len % 2)
	{
		for (y = (len - 1) / 2; y < len - 1; y++)
		{
			_putchar(str[y + 1]);
		}
	}
	_putchar('\n');
}
