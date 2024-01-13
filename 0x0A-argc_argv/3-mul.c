#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function in prog
 * @argc: argu count
 * @argv: argu vect
 * Return: return 0 
 */

int main(int argc, char *argv[])
{
	int count = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	count = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", count);
	return (0);
}
