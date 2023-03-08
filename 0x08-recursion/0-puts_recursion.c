#include "main.h"

/**
 * _puts_recursion - Function that prints a string,
 * Followed by a new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
