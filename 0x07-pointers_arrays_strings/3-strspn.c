#include "bako.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int k, y, b, kola;

	b = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		kola = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[k] == accept[y])
			{
				b++;
				kola = 1;
			}
		}
		if (kola == 0)
		{
			return (b);
		}
	}
	return (0);
}
