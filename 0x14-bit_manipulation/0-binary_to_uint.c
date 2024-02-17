#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int.
 * @b: a character.
 * Return: return 0 if b is null.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
		return (0);


		if (b[i] != '0' && b[i] != '1')
			return (0);
	result = (result << 1) + (b[i] - '0');
	}
	return (result);
}
