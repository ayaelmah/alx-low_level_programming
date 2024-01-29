#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - a funct that prints.
 * @separator - a parameter.
 * @n: an integer.
 * @x: anotheer integer.
 * Return: Return 0 if (success).
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		char *x = va_arg(arg, char *);

		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("/n");
	va_end(arg);
}
