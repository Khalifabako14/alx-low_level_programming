#include "main.h"

/**
 * factorial -> returns the factorial of an integer
 * @n: integer
 * Return: -1 when error occurs 1 for 0 factorial and int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
