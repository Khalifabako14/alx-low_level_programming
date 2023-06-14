#include "main.h"

/**
 * _strcpy - Copy of the content from one variable to another
 * @dest: This is destiny
 * @src: This is the copy
 * Return: This returns the copy
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
