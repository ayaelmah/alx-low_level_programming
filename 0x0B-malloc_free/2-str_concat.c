#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a func that cconcatinates a string.
 * @s1: string1.
 * @s2: string2.
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0 ; s1[i] != '\0' ; i++)
		s1len += 1;

	for (i = 0 ; s2[i] != '\0' ; i++)
		s2len += 1;

	ptr = malloc((sizeof(char) * ((s1len + s2len) + 1)));

	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
		ptr[i] = s1[i];
	for (i = 0 ; s2[i] != '\0' ; i++)
		ptr[s1len + 1] = s2[i];
	return (ptr);
}
