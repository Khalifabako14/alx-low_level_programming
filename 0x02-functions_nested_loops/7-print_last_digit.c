#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @v: the number
  * Return: value of the last digit
  */

int print_last_digit(int v)
{
	int kb = v % 10;

	if (kb < 0)
		kb *= -1;

	_putchar(kb + '0');

	return (kb);
}
