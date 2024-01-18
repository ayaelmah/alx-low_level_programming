#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - a function with 2 dimensions.
 *@height: height paramet.
 *@width: a param.
 *Return: return 0 if success.
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			free(a);
			for (j = 0; j <= height; j++)
				free(a[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
