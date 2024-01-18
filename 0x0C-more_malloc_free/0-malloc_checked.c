#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - a function of memory .
 * @b: an integer
 * Return: returns 0 if right.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	else
		return (ptr);
}
