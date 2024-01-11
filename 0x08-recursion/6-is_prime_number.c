#include "main.h"
#include <stdio.h>
#include "prime.c"

/**
 * is_prime_number - function
 * @n: param
 * Return: returns
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	return (prime(n, (n - 1)));
}
