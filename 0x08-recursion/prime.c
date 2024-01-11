#include "main.h"
#include <stdio.h>

/**
 * prime - a function that gives if a number is prime or not.
 * @num: an origin number
 * @cur: a number to be devided by
 * Return: return 1 if true return 0 if false.
 */

int prime(int num, int cur)
{
	if (num == 1)
		return (0);
	if (num % cur == 0)
	{
		if (cur == 1)
			return (1);
		return (0);
	}
	return (prime(num, (cur - 1)));
}
