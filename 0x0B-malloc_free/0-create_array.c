#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Function that creates an array of chars, and initializes it
 * with a specific char.
 * @size: This is the length of the array
 * @c: This is the input character
 * Return: An Array Initialized with the specific char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *s;

	k = (char *) malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
	{
		s[k] = c;
	}
	return (s);
}
