#include "main.h"

/**
 * _strlen_recursion - main function
 * @s: function param
 * Return: return value
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));

	}
	return (0);
}
