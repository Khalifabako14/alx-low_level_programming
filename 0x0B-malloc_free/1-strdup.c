#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: This is the input string
 * Return: function returns a pointer to the duplicated string. It returns
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *s;
	int k, y;

	if (str == NULL)
		return (NULL);

	for (k = 0; str[k] != '\0'; k++)
		;

	s = (char *)  malloc((k + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (y = 0; y < k ; y++)
		s[y] = str[y];

	s[k + 1] = '\0';
	return (s);
}
