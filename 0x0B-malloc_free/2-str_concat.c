#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int len, i, len2, i2;

	len = 0;

	while (s1 && *(s1 + len))
		len++;

	len2 = 0;

	while (s2 && *(s2 + len2))
		len2++;

	str = (char *) malloc(sizeof(char) * (len + len2 + 1));

	if (str == NULL)
		return (NULL);
	i = 0;

	while (i < len)
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	i2 = 0;

	while (i2 < len2)
	{
		*(str + len + i2) = *(s2 + i2);
		i2++;
	}

	*(str + len + len2) = '\0';

	return (str);
}
