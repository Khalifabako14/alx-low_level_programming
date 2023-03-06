#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a, u;

	for (a = 0; *s != '\0'; a++)
	{
		for (u = 0; accept[u] != '\0'; u++)
		{
			if (*s == accept[u])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
