#include "main.h"

/**
 * rot13 - Function tht encodes a string in rot13
 * @s: string to be encoded
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int k, y;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (y = 0; a[y] != '\0'; y++)
		{
			if (s[k] == a[y])
			{
				s[k] = b[y];
				break;
			}
		}
	}

	return (s);
}
