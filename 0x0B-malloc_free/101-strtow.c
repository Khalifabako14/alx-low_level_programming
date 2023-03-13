#include <stdlib.h>
#include "main.h"

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - Function that locates the index marking the end of the
 * first word contained within a string.
 * @str: The string to be searched.
 *  Return: Index marking the end of the initial word pointed to by str.
 */

int word_len(char *str)
{
	int k = 0, len = 0;

	while (*(str + k) && *(str + k) != ' ')
	{
		len++;
		k++
	}

	return (len);
}

/**
 * count_words - Function that counts the number of words
 * contained within a string.
 * @str: The string to be searched.
 * Return: The number of words contained within str.
 */

int count_words(char *str)
{
	int y = 0, words = 0, len = 0;

	for (y = 0; *(str + y); y++)
		len++;

	for (y = 0; y < len; y++)
	{
		if (*(str + y) != ' ')
		{
			words++;
			y += word_len(str + y);
		}
	}

	return (words);
}

/**
 * strtow - Function that splits a string into words.
 * @str: The string to be split.
 * Return: If str = NULL, str = "", or the function fails - NULL.
 * Otherwise - a pointer to an array of strings (words).
 */

char **strtow(char *str)
{
	char **strings;
	int y = 0, w, l, letters, words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[y] == ' ')
			y++;

		letters = word_len(str + y);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[y++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
