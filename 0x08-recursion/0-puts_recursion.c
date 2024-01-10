#include "main.h"

/**
 * puts_recursion - a function that prints a string
 * @s: a pointer to a string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
