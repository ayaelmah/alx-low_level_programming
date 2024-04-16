#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps integers.
 * @a: an integer pointer.
 * @b: another int pointer.
 * return: return nothing.
 */
void swap_int(int *a, int *b)
{
	int zmr;

	zmr = *a;
	*a = *b;
	zmr = *b;

	printf("%d\n", zmr);
}
