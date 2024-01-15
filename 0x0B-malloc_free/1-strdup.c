#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a func that dupes a string
 * @str: a pointer
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *ptr;
	int sninat = 0;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		sninat++;

	ptr = malloc(sizeof(char) * sninat);

	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
		ptr[i] = str[i];
	return (ptr);
}
