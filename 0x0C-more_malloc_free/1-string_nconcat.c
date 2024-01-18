#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concat.
 * @s1: string1.
 * @s2: string2.
 * @n: an integer.
 * Return: return 0 if correct.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	ptr = malloc(sizeof(char) * (s1len + n) + 1);
	if (ptr == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			ptr[s1len + i] = s2[i];
		ptr[s1len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		for (i = 0; i < n; i++)
			ptr[s1len + i] = s2[i];
		ptr[s1len + i] = '\0';
	}
	return (ptr);
}
