#include "main.h"

/**
 * string_toupper - Function that changes all lowercase letters of
 * a string to uppercase.
 * @s: string to modify
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] >= 'a' && s[k] <= 'z')
			s[k] = s[k] - 32;
	}

	return (s);
}
