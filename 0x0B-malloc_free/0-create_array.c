#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: size of the array
 * @c: a specific character
 * Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size <= 0)
	{
		return ('\0');
	}
	str = (char *) malloc(sizeof(char) * size);

	if (str == NULL)
		return (0);
	i = 0;

	while (i < size)
	{
		*(str + i) = c;
		i++;
	}
	*(str + i) = '\0';

	return (str);
}
