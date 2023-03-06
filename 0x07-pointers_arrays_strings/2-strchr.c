#include "bako.h"
#include <stdio.h>

/**
 * _strchr - Function that locates a character in a string
 * @s: string to search
 * @c: char to find
 * Return: A pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int f;

	while (1)
	{
		f = *s++;
		if (f == c)
		{
			return (s - 1);
		}
		if (f == 0)
		{
			return (NULL);
		}
	}
}
