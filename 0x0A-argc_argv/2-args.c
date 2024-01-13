#include<stdio.h>

/**
 * main - a function in program
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0 if right
 */

int main(int argc, char *argv[])
{
	int i;
	for ( i = 0; i < argc ; i++)
		printf("%s\n", argv[i]);

	return (0);
}
