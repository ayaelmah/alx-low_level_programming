#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - prints an array of integers
 * @min: minimal of an int
 * @max: maximal of an int.
 * Return: return 0 if right.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == 0)
	return (NULL);

	for (i = 0; min <= max ; i++)
		ptr[i] = min++;
	return (ptr);
}
