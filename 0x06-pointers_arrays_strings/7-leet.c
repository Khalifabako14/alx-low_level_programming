#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int k, y;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[k] == a[y])
			{
				s[k] = b[y];
			}
		}
	}

	return (s);
}
