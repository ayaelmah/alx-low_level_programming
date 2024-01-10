#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - gives the power of a number by another.
 * @x: base number.
 * @y: power of a number.
 * Return: x power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
	return (0);
}
