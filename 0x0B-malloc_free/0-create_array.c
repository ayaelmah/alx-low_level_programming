#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that gives an array of chars.
 * @c: a character arg
 * @size: the size of array
 * Return: return 0 if right.
 */

char *create_array(unsigned int size, char c)
{
	char* ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	
	ptr = malloc((sizeof(char) * size));

	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		ptr[i] = c;
	return (ptr);
}
