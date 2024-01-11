#include "main.h"
#include "find_sqrt.c"

/**
 * _sqrt_recursion - a function that returns the sqrt
 * @n: an integer.
 * Return: return 0 if true.
 */

int _sqrt_recursion(int n)
{
	return (find_sqrt(n, n));
}
