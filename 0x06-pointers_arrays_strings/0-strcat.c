#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int k, b;

	k = 0;
	b = 0;

	while (dest[k] != '\0')
		k++;

	while (src[b] != '\0')
	{
		dest[k] = src[b];
		b++;
		k++;
	}

	dest[k] = '\0';

	return (dest);
}
