#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a function in prog
 * @argc: argu count
 * @argv: argu vect
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i, j, count = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1 ; i < argc ; i++)
	{
		if (atoi(argv[i]) < 0)
			continue;
		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		count += atoi(argv[i]);
	}
	printf("%d\n", count);
	return (0);
}
