#include "bako.h"
#include <stdio.h>

/**
 * _strstr - Function that locates a substring
 * @haystack: string to search in
 * @needle: substring to look out for
 * Return: Pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int k, b;

	for (k = 0; haystack[k] != '\0'; k++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[k + b] != needle[b])
				break;
		}
		if (!needle[b])
			return (&haystack[k]);
	}
	return (NULL);
}
