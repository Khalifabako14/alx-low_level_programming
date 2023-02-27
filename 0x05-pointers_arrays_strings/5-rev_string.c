#include "khalifa.h"

/**
 * rev_string - Function that reverses a string
 * @s: validate the character
 */

void rev_string(char *s)
{
	int k, len;

	char *begin, *end = s;

	for (k = 0; s[k] != '\0' && s[k + 1] != '\0'; k++)
	{
		end++;
	}
	len = k + 1;
	begin = s;
	for (k = 0; k < len / 2; k++)
	{
		char x;

		x = *end;

		*end = *begin;

		*begin = x;

		begin++;
		end--;
	}
	end[len + 1] = '\0';
}
