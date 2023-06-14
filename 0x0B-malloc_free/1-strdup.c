#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory
 * @str: a string
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);
	len = 0;

	while (*(str + len) != '\0')
		len++;

	s = (char *) malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);
	i = 0;

	while (i < len)
	{
		*(s + i) = *(str + i);
		i++;
	}
	*(s + i) = '\0';

	return (s);
}
