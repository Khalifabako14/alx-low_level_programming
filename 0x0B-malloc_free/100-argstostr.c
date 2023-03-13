#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function Concatenates all arguments of the program;
 * arguments are separated by a new line in the string.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 * Otherwise - a pointer to the new string.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int arg, megabyte, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (megabyte = 0; av[arg][megabyte]; megabyte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (megabyte = 0; av[arg][megabyte]; megabyte++)
			str[index++] = av[arg][megabyte];

		str[index++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
