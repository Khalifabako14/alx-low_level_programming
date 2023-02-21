#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 * that are multiples of 3 or 5.
 * Return: 0 (Always)
 */

int main(void)
{
	int v, sum = 0;

	for (v = 0; v < 1024; v++)
	{
		if ((v % 3) == 0 || (v % 5) == 0)
			sum += v;
	}

	printf("%d\n", sum);

	return (0);
}
