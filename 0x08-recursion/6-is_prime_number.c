#include "main.h"
#include <stdio.h>
#include "prime.c"

/**
 * is_prime_number - a function that gives the prime of a number
 * @n: a number that shoud be a prime.
 * Retun: returns 1 if true and 0 if false.
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	return (prime(n, (n - 1)));
}
