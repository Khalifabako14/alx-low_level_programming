#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all
 * arguments of a program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: strings
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int i, j, len, k;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			j++;
			len++;
		}
		i++;
		len++;
	}
	a = (char *) malloc((sizeof(char) * len) + 1);
	if (a == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			a[k] = av[i][j];
			j++;
			k++;
		}
		a[k] = '\n';
		i++;
		k++;
	}
	a[k] = '\0';
	return (a);
}
