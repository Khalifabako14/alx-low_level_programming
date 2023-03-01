#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings. it will use at
 * most n bytes from src
 * @dest: This is the output  dest
 * @src: This is the input src
 * @n: This is the number bytes fro src
 *
 * Return: This is my return
 */
char *_strncat(char *dest, char *src, int n)
{
	int k, b;

	for (k = 0; dest[k] != '\0'; k++)
		;
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[k] = src[b];
		k++;
	}
	if (b < n)
	{
	dest[k] = '\0';
	}
	return (dest);
}
