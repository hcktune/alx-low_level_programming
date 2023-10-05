#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - malloc 2D grid of int
 * @w: array's width (number of columns)
 * @h: array's height (number of rows)
 * Return: pointer to the 2D array
 */

int **alloc_grid(int w, int h)
{
	if (check(w, h) == 0)
	{
		return (NULL);
	}
    int **arr;
	arr = (int **)malloc(sizeof(int *) * h);
    if (arr == NULL)
	{
		return (NULL);
	}
	int i, j;
	for (i = 0; i < h; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * w);

		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
            free(arr);
			return (NULL);
        }

        for (j = 0; j < w; j++)
		{
			arr[i][j] = 0;
 		}
	}

	return arr;
}

int check(int w, int h)
{
    if (w <= 0 || h <= 0)
	{
		return (0);
    }
	return (1);
}

