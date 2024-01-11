#include "main.h"

/**
 * find_sqrt - a function that gives the square root
 * @numr: an original number.
 * @cur: the square root of number,
 * Return: 0 if true
 */

int find_sqrt(int numr, int cur)
{
	if (cur * cur == numr)
		return (cur);
	else if (cur > 0)
		return (find_sqrt(numr, (cur - 1)));
	return (-1);
}
