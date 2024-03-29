#include "main.h"
#include <stdio.h>

/**
 * factorial - gives factorial of a number.
 * @n: number of factorial.
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
