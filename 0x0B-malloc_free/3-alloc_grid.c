#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a
 * 2 dimensional array
 * @width: width of array
 * @height: height of array
 * Return: a pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	a = (int **) malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);
	j = 0;
	while (j < height)
	{
		*(a + j) = (int *) malloc(sizeof(int) * width);
		if (*(a + j) == NULL)
		{
			free(a);
			i = 0;
			while (i <= j)
			{
				free(*(a + i));
				i++;
			}
			return (NULL);
		}
		j++;
	}
	j = 0;
	while (j < height)
	{
		i = 0;
		while (i < width)
		{
			a[j][i] = 0;
			i++;
		}
		j++;
	}
	return (a);
}
