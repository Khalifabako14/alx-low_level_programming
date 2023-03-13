#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: This is the columns of the array
 * @height: This is the rows of the array
 * Return: Returns a pointer to a 2 dimensional array of integers.
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height) /* 6 columns and 4 rows*/
{
	int k, b;
	int **arr;

	if (width < 1 || height < 1)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (b = 0; b < height; b++)
	{
		arr[b] = malloc(sizeof(int) * width);
		if (arr[b] == NULL)
		{
			for (b = 0; b < height; b++)
			{
				free(arr[b]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (b = 0; b < height; b++)
		for (k = 0; k < width; k++)
		{
			arr[b][k] = 0;
		}
	return (arr);
}
