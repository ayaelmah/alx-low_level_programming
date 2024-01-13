#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: first function
 * @argv: second function
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int Fn, Sn, Tn, Fr, Ft, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	num = atoi(argv[1]);

	Fn = num / 25;
	Sn = (num % 25) / 10;
	Tn = (num % 25 % 10) / 5;
	Fr = (num % 25 % 10 % 5) / 2;
	Ft = (num % 25 % 10 % 5 % 2) / 1;
	num = Fn + Sn + Tn + Fr + Ft;

	printf("%d\n", num);
	return (0);
}
