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

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = result * 2 + (*b++ - '0');
	}
	return (result);
}
