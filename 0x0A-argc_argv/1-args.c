#include <stdio.h>

/**
 * main - a function that is in the prog
 * @argc: argu count
 * @argv: argu vector
 * Return: returns 0 if true.
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", (argc - 1));
	return (0);
}
