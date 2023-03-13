#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings.
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 * @s1: This is the output string
 * @s2: This is the input string
 * Return: If concatenation fails - NULL.
 * Otherwise - a pointer the newly-allocated space in memory
 * containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int k, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (k = 0; s1[k] || s2[k]; k++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (k = 0; s1[k]; k++)
		concat_str[concat_index++] = s1[k];

	for (k = 0; s2[k]; k++)
		concat_str[concat_index++] = s2[k];

	return (concat_str);
}
