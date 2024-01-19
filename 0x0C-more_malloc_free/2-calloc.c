#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - a function that allocates.
 * @nmemb: an int.
 * @size: the size of a function.
 * Return: returns 0 if right.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
