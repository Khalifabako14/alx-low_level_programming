#include "main.h"

/**
 * check_sqrt_recursion -> checks the square of natural numbers
 * @n: number we are trying to find the square root
 * @i: iterator
 * Return: natural square root
 */

int check_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (check_sqrt_recursion(n, (i + 1)));
}

/**
 * _sqrt_recursion -> returns square root of number
 * @n: number to find square root
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check_sqrt_recursion(n, 0));
}
