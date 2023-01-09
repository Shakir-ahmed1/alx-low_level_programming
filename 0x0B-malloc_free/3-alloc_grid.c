#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - it returns a pointer to two dimensional array each
 * element initilzed to 0
 * @width: number of columns
 * @height: number of rows
 * Return: NULL if failure or (width or heigh) are 0 or -ve , otherwise
 * the 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **mcc;

	if (height <= 0 || width <= 0)
		return (NULL);

	mcc = (int **)malloc(sizeof(int *) * height);
	if (mcc == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		mcc[i] = (int *)malloc(sizeof(int) * width);
		if (mcc[i] == NULL)
		{
			for ( i = 0; i < height; i++)
			{
				free(mcc[i]);
			}
	}

	for (i = 0; i < (height); i++)
	{
		for (j = 0; j < width; j++)
		{
			mcc[i][j] = 0;
		}
	}
	return (mcc);
}
