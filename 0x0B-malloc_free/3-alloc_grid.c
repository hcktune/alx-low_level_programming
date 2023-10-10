#include "main.h"

/**
* alloc_grid - malloc 2d grid of int
* @w: array's width
* @h: arrays's height
* Return: ptr
*/


int **alloc_grid(int w, int h)
{
	int **arr;

	int j, i;

	if (w <= 0 || h <= 0)
		return (NULL);

	arr = (int **)malloc(h * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (j = 0; j < h; j++)
		arr[j] = (int *)malloc(w * sizeof(int));

	for (j = 0; j < h; j++)
	{
		for (i = 0; i < w; i++)
			arr[j][i] = 0;
	}

	return (arr);	
{
