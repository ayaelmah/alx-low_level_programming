#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: Pointer to struct
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name : %s\n", (d->name) ? d->name : "(nil)");
		printf("age : %f\n", (d->age));
		printf("owner : %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
