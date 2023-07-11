#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - allocates memory to a grid
 *
 * @width: width of the grid
 *
 * @height: height of the grid
 *
 * Return: returns pointer to the grid
 */
int **alloc_grid(int width, int height)
{
	int w, h;
	int **array;
	int len;

	len = width * height;
	if (len <= 0)
	{
		return (NULL);
	}

	array = (int **)malloc(sizeof(int) * height);
	if (array == NULL)
	{
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		array[h] = (int *)malloc(sizeof(int) * width);
		if (array[h] == NULL)
		{
			for (w = 0; w < h; w++)
			{
				free(array[w]);
			}
			free(array);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			array[h][w] = 0;
		}
	}
	return (array);
}
