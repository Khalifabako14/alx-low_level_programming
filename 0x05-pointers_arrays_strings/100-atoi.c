#include "khalifa.h"

/**
 * _atoi - Converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int a, k, y, len, b, digit;

	a = 0;
	k = 0;
	y = 0;
	b = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && b == 0)
	{
		if (s[a] == '-')
			++k;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (k % 2)
				digit = -digit;
			y = y * 10 + digit;
			b = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			b = 0;
		}
		a++;
	}
	if (b == 0)
		return (0);

	return (y);
}
